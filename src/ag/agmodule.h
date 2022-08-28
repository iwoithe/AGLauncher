#ifndef AG_AG_AGMODULE_H
#define AG_AG_AGMODULE_H

#include "modularity/imodulesetup.h"

namespace ag::ag
{
class AGModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerResources() override;
    void registerStores() override;
};

} // namespace ag::ag

#endif
