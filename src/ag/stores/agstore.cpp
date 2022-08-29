#include "agstore.h"

#include <QByteArray>
#include <QDebug>
#include <QDir>
#include <QDirIterator>
#include <QFile>
#include <QJsonDocument>
#include <QString>

#include "actions/dispatcher.h"

using namespace ag::ag;

AGStore::AGStore(QObject* parent) : QAbstractListModel(parent), IStore()
{
    m_roles.insert(rAGName, "agName");
    m_roles.insert(rCreator, "creator");
    m_roles.insert(rThumbnail, "thumbnail");
    m_roles.insert(rDirectoryPath, "directoryPath");
    m_roles.insert(rExecutableName, "executableName");

    load();
    init();
}

void AGStore::init()
{
}

QVariant AGStore::data(const QModelIndex& index, int role) const
{
    if (!index.isValid()) {
        return QVariant();
    }

    QVariantMap ag = m_ags[index.row()];

    switch (role) {
        case rAGName:
            return ag["agName"];
        case rCreator:
            return ag["creator"];
        case rThumbnail:
            if (ag["thumbnail"] == "") {
                // TODO: Add the placeholder thumbnail
                return "qrc:/qml/AGLauncher/share/placeholder_thumbnail.png";
            }

            return ag["thumbnail"];
        case rDirectoryPath:
            return ag["directoryPath"];
        case rExecutableName:
            return ag["executableName"];
    }

    return QVariant();
}

int AGStore::rowCount(const QModelIndex&) const
{
    return m_ags.count();
}

QHash<int, QByteArray> AGStore::roleNames() const
{
    return m_roles;
}

int AGStore::currentIndex()
{
    return m_currentIndex;
}

void AGStore::setCurrentIndex(int index)
{
    if (m_currentIndex == index) {
        return;
    }

    m_currentIndex = index;
    emit currentIndexChanged();
}

void AGStore::load()
{
    QDirIterator iter("share/ag");//, QDir::NoDotAndDotDot);
    while (iter.hasNext()) {
        QDir d(iter.next());

        if (d.dirName() == "." || d.dirName() == "..") {
            continue;
        }

        QFile infoFile(d.absoluteFilePath("info.json"));
        
        QVariantMap infoData;

        if (infoFile.open(QFile::ReadOnly | QFile::Text)) {
            QByteArray infoFileContents = infoFile.readAll();
            infoData = qvariant_cast<QVariantMap>(QJsonDocument::fromJson(infoFileContents).toVariant());
        }

        QVariantMap ag;
        ag["agName"] = infoData["agName"];
        ag["creator"] = infoData["creator"];
        ag["thumbnail"] = "file:///" + d.absoluteFilePath("thumbnail.png");
        ag["directoryPath"] = d.absolutePath();
        ag["executableName"] = infoData["executableName"];

        m_ags.push_back(ag);
    }
}

void AGStore::openCurrentAG()
{
    QVariantMap args = m_ags[m_currentIndex];
    dispatcher()->dispatch("run-ag", args);
}
