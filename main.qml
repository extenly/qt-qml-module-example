import QtQuick 2.12
import QtQuick.Window 2.12

import QtQuick.Controls 2.12
import com.org.printersettings 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("qt-qml-module-example")

    PrinterSettings {
        id: printerSettings
    }

    Item {
        id: mainUI
        anchors.fill: parent
        Rectangle {
            anchors.fill: parent
            anchors.margins: 50
            color: printerSettings.printerOn ? "green" : "red"
        }
        ToolButton {
            width: 120
            height: 120
            anchors.centerIn: parent
            background: Rectangle {
                width: 120
                height: 120
                color: "transparent"
                border.color: "black"
                radius: width/2
                Image {
                    anchors.fill: parent
                    anchors.margins: 40
                    fillMode: Image.PreserveAspectFit
                    source: "onoff.png"
                }
            }
            onClicked: {
                printerSettings.printerOn = !printerSettings.printerOn;
            }
        }
    }
}
