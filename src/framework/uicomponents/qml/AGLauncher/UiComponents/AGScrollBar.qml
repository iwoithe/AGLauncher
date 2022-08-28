import QtQuick 2.15
import QtQuick.Controls 2.15

import AGLauncher.Ui

ScrollBar {
    id: root

    property int thickness: 4

    contentItem: Rectangle {
        implicitWidth: root.thickness
        color: UiTheme.componentColor
    }
}
