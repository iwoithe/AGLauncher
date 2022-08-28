#ifndef AG_HUB_HUBMODULE_H
#define AG_HUB_HUBMODULE_H

#include "modularity/imodulesetup.h"

namespace ag::hub
{
class HubModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerResources() override;
};

} // namespace ag::hub

#endif
