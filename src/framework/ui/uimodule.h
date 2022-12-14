#ifndef AG_UI_UIMODULE_H
#define AG_UI_UIMODULE_H

#include "modularity/imodulesetup.h"

namespace ag::ui
{
class UiModule : public modularity::IModuleSetup
{
public:
    std::string moduleName() const override;
    void registerUiTypes() override;
};
} // namespace ag::ui

#endif
