#include <QQmlEngine>

#include "agmodule.h"
#include "stores/agstore.h"

using namespace ag::ag;

static void agInitResources()
{
    Q_INIT_RESOURCE(ag);
}

std::string AGModule::moduleName() const
{
    return "ag";
}

void AGModule::registerResources()
{
    agInitResources();
}

void AGModule::registerStores()
{
    qmlRegisterType<AGStore>("AGLauncher.AG", 0, 1, "AGStore");
}
