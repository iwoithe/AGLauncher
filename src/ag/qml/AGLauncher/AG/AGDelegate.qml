import QtQuick 2.15

import AGLauncher.Ui 0.1
import AGLauncher.UiComponents 0.1

Component {
    id: root

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
