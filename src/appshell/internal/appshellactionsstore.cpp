#include "appshellactionsstore.h"
#include "actions/dispatcher.h"
#include "interactive/internal/interactive.h"

#include <QApplication>

using namespace ag::actions;
using namespace ag::interactive;
using namespace ag::appshell;

void AppShellActionsStore::init()
{
    Interactive::instance()->regDialog("aglauncher://appshell/about", "qrc:/qml/AGLauncher/AppShell/AboutDialog.qml");
}

void AppShellActionsStore::about()
{
    Interactive::Params params;
    Interactive::instance()->openDialog("aglauncher://appshell/about", params);
}

void AppShellActionsStore::aboutQt()
{
    qApp->aboutQt();
}
