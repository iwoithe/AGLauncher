#ifndef AG_APPSHELL_APPSHELL_H
#define AG_APPSHELL_APPSHELL_H

#include <QList>

#include "modularity/imodulesetup.h"

namespace ag::appshell
{

class AppShell
{
public:
    AppShell();

    void addModule(modularity::IModuleSetup* module);

    int run(int argc, char** argv);
private:
    QList<modularity::IModuleSetup*> m_modules;
};

} // namespace ag::appshell

#endif
