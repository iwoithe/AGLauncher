#ifndef AG_LAUNCH_LAUNCHMODULE_H
#define AG_LAUNCH_LAUNCHMODULE_H

#include "modularity/imodulesetup.h"

namespace ag::launch
{
class LaunchModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerStores() override;
};

} // namespace ag::launch

#endif
