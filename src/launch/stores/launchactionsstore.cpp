#include "launchactionsstore.h"
#include "actions/dispatcher.h"
#include "interactive/internal/interactive.h"

#include <QDebug>

using namespace ag::actions;
using namespace ag::interactive;
using namespace ag::launch;

void LaunchActionsStore::init()
{
    dispatcher()->reg(this, "run-ag", [this](QVariantMap args) {this->runAG(args);});
}

void LaunchActionsStore::runAG(QVariantMap args)
{
    qDebug() << args;
}
