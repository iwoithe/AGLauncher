#include "launchactionsstore.h"
#include "actions/dispatcher.h"
#include "interactive/internal/interactive.h"

#include <QApplication>
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QWindow>

using namespace ag::actions;
using namespace ag::interactive;
using namespace ag::launch;

void LaunchActionsStore::init()
{
    dispatcher()->reg(this, "run-ag", [this](QVariantMap args) {this->runAG(args);});
}

void LaunchActionsStore::runAG(QVariantMap args)
{
    // TODO: Get extension of executable depending on platform
    QString program = args["directoryPath"].toString() + "/" + args["executableName"].toString() + ".exe";
    QStringList programArgs;
    QProcess *process = new QProcess();
    connect(process, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished), [this](int exitCode, QProcess::ExitStatus exitStatus){this->raiseAppWindows();});
    process->start(program, programArgs);
}

void LaunchActionsStore::raiseAppWindows()
{
    QWindowList allWindows = QApplication::allWindows();
    for (int i = 0; i < allWindows.size(); i++) {
        QWindow *window = allWindows[i];
        window->show();
        window->raise();
        window->requestActivate();
    }
}
