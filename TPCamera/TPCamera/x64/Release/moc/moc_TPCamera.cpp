/****************************************************************************
** Meta object code from reading C++ file 'TPCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TPCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TPCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TPCamera_t {
    QByteArrayData data[11];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TPCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TPCamera_t qt_meta_stringdata_TPCamera = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TPCamera"
QT_MOC_LITERAL(1, 9, 13), // "buttonAllumer"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "buttonEteindre"
QT_MOC_LITERAL(4, 39, 12), // "buttonGauche"
QT_MOC_LITERAL(5, 52, 12), // "buttonDroite"
QT_MOC_LITERAL(6, 65, 10), // "buttonHaut"
QT_MOC_LITERAL(7, 76, 9), // "buttonBas"
QT_MOC_LITERAL(8, 86, 14), // "buttonZoomPlus"
QT_MOC_LITERAL(9, 101, 15), // "buttonZoomMoins"
QT_MOC_LITERAL(10, 117, 14) // "buttonZoomStop"

    },
    "TPCamera\0buttonAllumer\0\0buttonEteindre\0"
    "buttonGauche\0buttonDroite\0buttonHaut\0"
    "buttonBas\0buttonZoomPlus\0buttonZoomMoins\0"
    "buttonZoomStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TPCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

void TPCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TPCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonAllumer(); break;
        case 1: _t->buttonEteindre(); break;
        case 2: _t->buttonGauche(); break;
        case 3: _t->buttonDroite(); break;
        case 4: _t->buttonHaut(); break;
        case 5: _t->buttonBas(); break;
        case 6: _t->buttonZoomPlus(); break;
        case 7: _t->buttonZoomMoins(); break;
        case 8: _t->buttonZoomStop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TPCamera::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TPCamera.data,
    qt_meta_data_TPCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TPCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TPCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TPCamera.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TPCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
