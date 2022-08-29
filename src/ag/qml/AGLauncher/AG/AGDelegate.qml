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

            spacing: 10

            Item {
                width: rootItem.width
                height: rootItem.width

                Image {
                    id: thumbnailImage
                    width: 80
                    height: 80
                    source: thumbnail
                    fillMode: Image.PreserveAspectCrop
                    smooth: true
                    clip: true

                    layer.enabled: true
                    layer.effect: OpacityMask {
                        maskSource: Item {
                            width: thumbnailImage.width
                            height: thumbnailImage.height
                            Rectangle {
                                anchors.fill: parent
                                radius: thumbnailBackground.radius
                            }
                        }
                    }
                }

                Rectangle {
                    id: thumbnailBackground
                    anchors.fill: parent
                    radius: 10
                    color: thumbnail === "" ? "#FFFFFF" : "transparent"
                    border.width: rootItem.GridView.isCurrentItem ? 2 : 0
                    border.color: UiTheme.accentColor
                }

                DropShadow {
                    anchors.fill: thumbnailImage
                    horizontalOffset: 0
                    verticalOffset: 2
                    radius: 4
                    samples: 9
                    color: "#64646455"
                    source: thumbnailBackground
                }
            }

            Column {
                width: parent.width
                spacing: 5

                AGLabel {
                    text: agName
                    width: parent.width

                    horizontalAlignment: Text.AlignHCenter
                }

                AGLabel {
                    // TODO: Is a prefix of "By " needed?
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
}
