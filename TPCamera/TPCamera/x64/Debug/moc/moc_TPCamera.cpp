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
    QByteArrayData data[16];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TPCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TPCamera_t qt_meta_stringdata_TPCamera = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TPCamera"
QT_MOC_LITERAL(1, 9, 12), // "EnvoieTrames"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "function"
QT_MOC_LITERAL(4, 32, 13), // "buttonAllumer"
QT_MOC_LITERAL(5, 46, 14), // "buttonEteindre"
QT_MOC_LITERAL(6, 61, 12), // "buttonGauche"
QT_MOC_LITERAL(7, 74, 12), // "buttonDroite"
QT_MOC_LITERAL(8, 87, 10), // "buttonHaut"
QT_MOC_LITERAL(9, 98, 9), // "buttonBas"
QT_MOC_LITERAL(10, 108, 10), // "buttonStop"
QT_MOC_LITERAL(11, 119, 14), // "buttonZoomPlus"
QT_MOC_LITERAL(12, 134, 15), // "buttonZoomMoins"
QT_MOC_LITERAL(13, 150, 14), // "buttonZoomStop"
QT_MOC_LITERAL(14, 165, 8), // "cameraOn"
QT_MOC_LITERAL(15, 174, 9) // "cameraOff"

    },
    "TPCamera\0EnvoieTrames\0\0function\0"
    "buttonAllumer\0buttonEteindre\0buttonGauche\0"
    "buttonDroite\0buttonHaut\0buttonBas\0"
    "buttonStop\0buttonZoomPlus\0buttonZoomMoins\0"
    "buttonZoomStop\0cameraOn\0cameraOff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TPCamera[] = {

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
       1,    1,   79,    2, 0x0a /* Public */,
       4,    0,   82,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    0,   84,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,
      14,    0,   92,    2, 0x0a /* Public */,
      15,    0,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
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
    QMetaType::Void,

       0        // eod
};

void TPCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TPCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EnvoieTrames((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->buttonAllumer(); break;
        case 2: _t->buttonEteindre(); break;
        case 3: _t->buttonGauche(); break;
        case 4: _t->buttonDroite(); break;
        case 5: _t->buttonHaut(); break;
        case 6: _t->buttonBas(); break;
        case 7: _t->buttonStop(); break;
        case 8: _t->buttonZoomPlus(); break;
        case 9: _t->buttonZoomMoins(); break;
        case 10: _t->buttonZoomStop(); break;
        case 11: _t->cameraOn(); break;
        case 12: _t->cameraOff(); break;
        default: ;
        }
    }
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
