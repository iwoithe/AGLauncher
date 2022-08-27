#include "uicomponentsmodule.h"
#include "ui/uiengines.h"

#include "view/dialogview.h"
#include "view/popupview.h"

using namespace ag::uicomponents;

static void uicomponentsInitResources()
{
    Q_INIT_RESOURCE(uicomponents);
}

std::string UiComponentsModule::moduleName() const
{
    return "uicomponents";
}

void UiComponentsModule::registerResources()
{
    uicomponentsInitResources();
}

void UiComponentsModule::registerUiTypes()
{
    qmlRegisterType<DialogView>("AGLauncher.UiComponents", 0, 1, "DialogView");
    qmlRegisterType<PopupView>("AGLauncher.UiComponents", 0, 1, "PopupView");
}
