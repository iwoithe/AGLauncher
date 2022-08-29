#ifndef AG_LAUNCH_LAUNCHACTIONSSTORE
#define AG_LAUNCH_LAUNCHACTIONSSTORE

#include <QObject>
#include <QVariantMap>

#include "actions/istore.h"

using namespace ag::actions;

namespace ag::launch
{
class LaunchActionsStore : public QObject, public IStore
{
    Q_OBJECT
public:
    LaunchActionsStore()
    {
        init();
    }

    void init() override;
    
    Q_INVOKABLE void runAG(QVariantMap args);
};
} // ag::launch

#endif
