/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "applications/gui/qt/SimpleGUI_QtCreator/SimpleGUI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(4, 59, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(5, 84, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(6, 108, 23), // "on_actionStop_triggered"
QT_MOC_LITERAL(7, 132, 24), // "on_actionStart_triggered"
QT_MOC_LITERAL(8, 157, 23), // "on_actionStep_triggered"
QT_MOC_LITERAL(9, 181, 24), // "on_actionPause_triggered"
QT_MOC_LITERAL(10, 206, 25), // "on_actionResume_triggered"
QT_MOC_LITERAL(11, 232, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(12, 256, 29), // "on_textEdit_Model_textChanged"
QT_MOC_LITERAL(13, 286, 33), // "on_listWidget_Plugins_itemCli..."
QT_MOC_LITERAL(14, 320, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 337, 4), // "item"
QT_MOC_LITERAL(16, 342, 39) // "on_listWidget_Plugins_itemDou..."

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionSave_triggered\0"
    "on_actionClose_triggered\0"
    "on_actionExit_triggered\0on_actionStop_triggered\0"
    "on_actionStart_triggered\0"
    "on_actionStep_triggered\0"
    "on_actionPause_triggered\0"
    "on_actionResume_triggered\0"
    "on_actionOpen_triggered\0"
    "on_textEdit_Model_textChanged\0"
    "on_listWidget_Plugins_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidget_Plugins_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionSave_triggered(); break;
        case 2: _t->on_actionClose_triggered(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionStop_triggered(); break;
        case 5: _t->on_actionStart_triggered(); break;
        case 6: _t->on_actionStep_triggered(); break;
        case 7: _t->on_actionPause_triggered(); break;
        case 8: _t->on_actionResume_triggered(); break;
        case 9: _t->on_actionOpen_triggered(); break;
        case 10: _t->on_textEdit_Model_textChanged(); break;
        case 11: _t->on_listWidget_Plugins_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->on_listWidget_Plugins_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
