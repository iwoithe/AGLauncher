import QtQuick 2.15

import AGLauncher.Ui 0.1
import AGLauncher.UiComponents 0.1

Item {
    id: root

    // The store and the delegate is temporary
    ListModel {
        id: agStore
        ListElement {
            title: "Kenney Platformer"
            creator: "I Woithe"
            directoryPath: "share/ag/Kenney Platformer"
        }
    }

    Component {
        id: agDelegate

        Item {
            width: 80
            height: 80

            Column {
                anchors.fill: parent

                AGLabel {
                    text: title
                }

                AGLabel {
                    text: creator

                    font.capitalization: Font.AllUppercase
                }
            }
        }
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
            delegate: agDelegate
            focus: true
        }
    }
}
