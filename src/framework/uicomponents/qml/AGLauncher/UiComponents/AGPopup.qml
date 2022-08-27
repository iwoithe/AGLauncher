import QtQuick 2.15

import AGLauncher.UiComponents 0.1

PopupView {
    id: root

    contentItem: AGPopupBackground {
        id: contentContainer
        popupViewRoot: root
    }
}
