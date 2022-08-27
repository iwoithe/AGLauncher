import QtQuick 2.15
import QtQuick.Controls 2.15

import AGLauncher.AppShell 0.1

MenuBar {
    id: root

    Menu {
        id: fileMenu
        title: qsTr("File")

        Action {
            text: qsTr("Quit")
            onTriggered: Qt.quit()
        }
    }

    Menu {
        id: helpMenu
        title: qsTr("Help")

        Action {
            text: qsTr("About")
            onTriggered: AppShell.about()
        }
        
        Action {
            text: qsTr("About Qt")
            onTriggered: AppShell.aboutQt()
        }
    }
}