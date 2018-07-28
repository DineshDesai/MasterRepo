import QtQuick 2.2
import QtQuick.Controls 2.1


Item{
Button{
    id: btnQML
    text : "QML Menu"
    onClicked: {

        myMenu.popup();
    }
}
Menu{
    id:myMenu
    y: btnQML.height

    MenuItem{
        id: menuitem1
        text:"Menu - 1"
    }
    MenuItem{
        id: menuitem2
        text:"Menu - 2"
    }
    MenuItem{
        id: menuitem3
        text:"Menu - 3"
    }

}

}
