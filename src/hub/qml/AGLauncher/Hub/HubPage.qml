import QtQuick 2.15

import AGLauncher.AG 0.1
import AGLauncher.Ui 0.1
import AGLauncher.UiComponents 0.1

Item {
    id: root

    AGStore {
        id: agStore
    }

    Rectangle {
        anchors.fill: parent
        color: UiTheme.backgroundColor

        AGGridView {
            id: agView
            anchors.fill: parent

            property int actualWidth: 80
            property int actualHeight: 80
            property int gapWidth: 40
            property int gapHeight: 20

            cellWidth: actualWidth + (gapWidth * 2)
            cellHeight: actualHeight + (gapHeight * 2)

            model: agStore
            delegate: AGDelegate {}
            focus: true
        }
    }
}
