#ifndef AG_UICOMPONENTS_DIALOGVIEW_H
#define AG_UICOMPONENTS_DIALOGVIEW_H

#include "global/ret.h"

#include "popupview.h"

using namespace ag;

namespace ag::uicomponents
{
class DialogView : public PopupView
{
    Q_OBJECT
public:
    explicit DialogView(QQuickItem* parent = nullptr);
    ~DialogView() override = default;

    bool isDialog() const override;
};
} // namespace ag::uicomponents


#endif