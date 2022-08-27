#ifndef AG_APPSHELL_APPSHELLMODULE_H
#define AG_APPSHELL_APPSHELLMODULE_H

#include "modularity/imodulesetup.h"

namespace ag::appshell
{
class AppShellModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerResources() override;
    void registerStores() override;
};

} // namespace ag::appshell

#endif
