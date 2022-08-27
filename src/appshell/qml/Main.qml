import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import AGLauncher.AppShell 0.1
import AGLauncher.UiComponents 0.1

ApplicationWindow {
    id: root
    width: 800
    height: 600
    title: qsTr("AGLauncher")
    visible: true

    menuBar: AGMenuBar {}
}