#include "agstore.h"

using namespace ag::ag;

AGStore::AGStore(QObject* parent) : QAbstractListModel(parent), IStore()
{
    m_roles.insert(rName, "name");
    m_roles.insert(rCreator, "creator");
    m_roles.insert(rThumbnail, "thumbnail");
    m_roles.insert(rDirectoryPath, "directoryPath");
    
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
        case rName:
            return ag["name"];
        case rCreator:
            return ag["creator"];
        case rThumbnail:
            if (ag["thumbnail"] == "") {
                return "qrc:/qml/AGLauncher/share/placeholder_thumbnail.png";
            }

            return ag["thumbnailUrl"];
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
