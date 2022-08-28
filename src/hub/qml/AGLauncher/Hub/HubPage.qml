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

            cellWidth: 80
            cellHeight: 80

            model: agStore
            delegate: AGDelegate {}
            focus: true
        }
    }
}
