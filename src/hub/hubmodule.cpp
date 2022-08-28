#include <QQmlEngine>

#include "hubmodule.h"

using namespace ag::hub;

static void hubInitResources()
{
    Q_INIT_RESOURCE(hub);
}

std::string HubModule::moduleName() const
{
    return "hub";
}

void HubModule::registerResources()
{
    hubInitResources();
}
