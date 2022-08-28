import QtQuick 2.15
import QtGraphicalEffects 1.15

import AGLauncher.Ui 0.1
import AGLauncher.UiComponents 0.1

Component {
    id: root

    Item {
        id: rootItem
        width: GridView.view.actualWidth

        Column {
            anchors.fill: parent

            Item {
                width: rootItem.width
                height: rootItem.width

                Rectangle {
                    id: thumbnailBackground
                    anchors.fill: parent
                    radius: 10
                    color: "#FFFFFF"
                }

                // Image {
                //     id: thumbnail
                //     source: ""
                //     sourceSize: Qt.size(parent.width, parent.height)
                //     smooth: true
                //     visible: false
                // }

                DropShadow {
                    anchors.fill: thumbnail
                    horizontalOffset: 0
                    verticalOffset: 2
                    radius: 4
                    samples: 9
                    color: "#64646455"
                    source: thumbnailBackground
                }
            }

            AGLabel {
                text: name
                width: parent.width

                horizontalAlignment: Text.AlignHCenter
            }

            AGLabel {
                text: creator
                width: parent.width

                font.pixelSize: 6
                color: UiTheme.fontSecondaryColor

                horizontalAlignment: Text.AlignHCenter
                font.capitalization: Font.AllUppercase
            }
        }
    }
}
