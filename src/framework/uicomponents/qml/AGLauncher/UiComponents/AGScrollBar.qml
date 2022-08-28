import QtQuick 2.15
import QtQuick.Controls 2.15

import AGLauncher.Ui 0.1

ScrollBar {
    id: root

    property int thickness: 4

    contentItem: Rectangle {
        implicitWidth: root.thickness
        radius: root.width / 2
        color: UiTheme.componentColor
    }
}
