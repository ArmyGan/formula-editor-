/****************************************************************************
** Meta object code from reading C++ file 'formulashow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../formulashow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formulashow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormulaShow_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormulaShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormulaShow_t qt_meta_stringdata_FormulaShow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FormulaShow"
QT_MOC_LITERAL(1, 12, 28), // "on_plainTextEdit_textChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 18), // "refreshFormulaView"
QT_MOC_LITERAL(4, 61, 29) // "on_plainTextEdit2_textChanged"

    },
    "FormulaShow\0on_plainTextEdit_textChanged\0"
    "\0refreshFormulaView\0on_plainTextEdit2_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormulaShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormulaShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormulaShow *_t = static_cast<FormulaShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_plainTextEdit_textChanged(); break;
        case 1: _t->refreshFormulaView(); break;
        case 2: _t->on_plainTextEdit2_textChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FormulaShow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormulaShow.data,
      qt_meta_data_FormulaShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormulaShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormulaShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormulaShow.stringdata0))
        return static_cast<void*>(const_cast< FormulaShow*>(this));
    if (!strcmp(_clname, "Ui::FormulaShowClass"))
        return static_cast< Ui::FormulaShowClass*>(const_cast< FormulaShow*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormulaShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE