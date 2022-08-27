#include "appshell/appshell.h"

#include "appshell/appshellmodule.h"
#include "ui/uimodule.h"
#include "uicomponents/uicomponentsmodule.h"

int main(int argc, char *argv[])
{
    ag::appshell::AppShell app;

    app.addModule(new ag::appshell::AppShellModule());
    app.addModule(new ag::ui::UiModule());
    app.addModule(new ag::uicomponents::UiComponentsModule());

    int code = app.run(argc, argv);
    return code;
}
