#ifndef AG_UICOMPONENTS_UICOMPONENTS_MODULE_H
#define AG_UICOMPONENTS_UICOMPONENTS_MODULE_H

#include "modularity/imodulesetup.h"

namespace ag::uicomponents
{
class UiComponentsModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerResources() override;
    void registerUiTypes() override;
};
}

#endif