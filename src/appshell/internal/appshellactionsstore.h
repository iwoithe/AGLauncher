#ifndef AG_APPSHELL_APPSHELLACTIONSSTORE
#define AG_APPSHELL_APPSHELLACTIONSSTORE

#include <QObject>
#include <QVariantMap>

#include "actions/istore.h"

using namespace ag::actions;

namespace ag::appshell
{
class AppShellActionsStore : public QObject, public IStore
{
    Q_OBJECT
public:
    AppShellActionsStore()
    {
        init();
    }

    void init() override;
    
    Q_INVOKABLE void about();
    Q_INVOKABLE void aboutQt();
};
} // ag::appshell

#endif
