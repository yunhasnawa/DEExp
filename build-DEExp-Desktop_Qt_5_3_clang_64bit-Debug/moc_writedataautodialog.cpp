/****************************************************************************
** Meta object code from reading C++ file 'writedataautodialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DEExp/writedataautodialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'writedataautodialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WriteDataAutoDialog_t {
    QByteArrayData data[13];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WriteDataAutoDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WriteDataAutoDialog_t qt_meta_stringdata_WriteDataAutoDialog = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 23),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 14),
QT_MOC_LITERAL(4, 60, 18),
QT_MOC_LITERAL(5, 79, 20),
QT_MOC_LITERAL(6, 100, 19),
QT_MOC_LITERAL(7, 120, 16),
QT_MOC_LITERAL(8, 137, 8),
QT_MOC_LITERAL(9, 146, 4),
QT_MOC_LITERAL(10, 151, 8),
QT_MOC_LITERAL(11, 160, 2),
QT_MOC_LITERAL(12, 163, 19)
    },
    "WriteDataAutoDialog\0on_pbtAutoWrite_clicked\0"
    "\0initProperties\0retrieveDataFromUI\0"
    "retrieveByteSizeList\0generateContentList\0"
    "performAutoWrite\0logTedLn\0text\0FileTime\0"
    "ft\0on_pbtClear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WriteDataAutoDialog[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void WriteDataAutoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WriteDataAutoDialog *_t = static_cast<WriteDataAutoDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pbtAutoWrite_clicked(); break;
        case 1: _t->initProperties(); break;
        case 2: _t->retrieveDataFromUI(); break;
        case 3: _t->retrieveByteSizeList(); break;
        case 4: _t->generateContentList(); break;
        case 5: _t->performAutoWrite(); break;
        case 6: _t->logTedLn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->logTedLn((*reinterpret_cast< FileTime(*)>(_a[1]))); break;
        case 8: _t->on_pbtClear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject WriteDataAutoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WriteDataAutoDialog.data,
      qt_meta_data_WriteDataAutoDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *WriteDataAutoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WriteDataAutoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WriteDataAutoDialog.stringdata))
        return static_cast<void*>(const_cast< WriteDataAutoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WriteDataAutoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
