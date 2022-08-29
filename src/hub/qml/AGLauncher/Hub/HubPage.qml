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

        Item {
            id: textRow

            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.leftMargin: 40
            anchors.rightMargin: 40
            anchors.topMargin: 20
            anchors.bottomMargin: 10

            AGLabel {
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalCenter

                text: qsTr("Apps & Games")
                font.bold: true
                font.pixelSize: 12
            }

            AGLabel {
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter

                text: qsTr("Press \"A\" to play")
                color: UiTheme.fontSecondaryColor
            }
        }

        AGGridView {
            id: agView
            anchors.fill: parent
            anchors.leftMargin: 40
            anchors.rightMargin: 40
            anchors.topMargin: textRow.y + textRow.anchors.topMargin
            anchors.bottomMargin: 10

            property int actualWidth: 80
            property int actualHeight: 100
            property int gapWidth: 20
            property int gapHeight: 10

            cellWidth: actualWidth + (gapWidth * 2)
            cellHeight: actualHeight + (gapHeight * 2)

            model: agStore
            delegate: AGDelegate {}
            focus: true

            onCurrentIndexChanged: agStore.currentIndex = agView.currentIndex
        }
    }

    // Will be moved to some C++ file somepoint
    Shortcut {
        sequences: ["A"]
        onActivated: agStore.openCurrentAG()
    }
}
