#include <QQmlEngine>

#include "launchmodule.h"
#include "stores/launchactionsstore.h"

using namespace ag::launch;

std::string LaunchModule::moduleName() const
{
    return "launch";
}

void LaunchModule::registerStores()
{
    // Do not register the launch actions store with QML as the methods are not to be exposed to QML
    LaunchActionsStore *launchActionsStore = new LaunchActionsStore();
}
