/****************************************************************************
** Meta object code from reading C++ file 'visualization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "visualization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Visualization_t {
    QByteArrayData data[11];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Visualization_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Visualization_t qt_meta_stringdata_Visualization = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 13),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 13),
QT_MOC_LITERAL(4, 43, 23),
QT_MOC_LITERAL(5, 67, 23),
QT_MOC_LITERAL(6, 91, 21),
QT_MOC_LITERAL(7, 113, 25),
QT_MOC_LITERAL(8, 139, 27),
QT_MOC_LITERAL(9, 167, 12),
QT_MOC_LITERAL(10, 180, 23)
    },
    "Visualization\0replot_points\0\0solve_clicked\0"
    "on_actionExit_triggered\0on_actionOpen_triggered\0"
    "on_pushButton_clicked\0on_actionInsert_triggered\0"
    "on_equationsTxt_textChanged\0pointsClosed\0"
    "on_pushButton_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Visualization[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    0,   67,    2, 0x08,

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

       0        // eod
};

void Visualization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Visualization *_t = static_cast<Visualization *>(_o);
        switch (_id) {
        case 0: _t->replot_points(); break;
        case 1: _t->solve_clicked(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_actionOpen_triggered(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_actionInsert_triggered(); break;
        case 6: _t->on_equationsTxt_textChanged(); break;
        case 7: _t->pointsClosed(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Visualization::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Visualization.data,
      qt_meta_data_Visualization,  qt_static_metacall, 0, 0}
};


const QMetaObject *Visualization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Visualization::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Visualization.stringdata))
        return static_cast<void*>(const_cast< Visualization*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Visualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
