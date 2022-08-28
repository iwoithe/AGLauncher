import QtQuick 2.15
import QtQuick.Controls 2.15

import AGLauncher.Ui 0.1
import AGLauncher.UiComponents 0.1

GridView {
    id: root

    clip: true
    boundsBehavior: Flickable.StopAtBounds

    ScrollBar.horizontal: AGScrollBar {}
    ScrollBar.vertical: AGScrollBar {}
}
