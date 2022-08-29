#ifndef AG_AG_AGSTORE_H
#define AG_AG_AGSTORE_H

#include <QAbstractListModel>
#include <QByteArray>
#include <QHash>
#include <QList>
#include <QModelIndex>
#include <QVariant>
#include <QVariantMap>

#include "actions/istore.h"

using namespace ag::actions;

namespace ag::ag
{
class AGStore : public QAbstractListModel, public IStore
{
    Q_OBJECT
public:
    explicit AGStore(QObject* parent = nullptr);

    void init() override;

    QVariant data(const QModelIndex& index, int role) const override;
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;
    QHash<int, QByteArray> roleNames() const override;

    void load();
    Q_INVOKABLE void openCurrentAG();

private:
    enum Roles {
        rAGName = Qt::UserRole + 1,
        rCreator,
        rThumbnail,
        rDirectoryPath,
        rExecutableName
    };

    QHash<int, QByteArray> m_roles;
    QList<QVariantMap> m_ags;
};
}

#endif
