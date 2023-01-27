/****************************************************************************
** Meta object code from reading C++ file 'componenta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ComponentA/componenta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'componenta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComponentA_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComponentA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComponentA_t qt_meta_stringdata_ComponentA = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ComponentA"

    },
    "ComponentA"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComponentA[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ComponentA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ComponentA::staticMetaObject = { {
    QMetaObject::SuperData::link<ComponentsCore::IComponent::staticMetaObject>(),
    qt_meta_stringdata_ComponentA.data,
    qt_meta_data_ComponentA,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComponentA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComponentA::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComponentA.stringdata0))
        return static_cast<void*>(this);
    return ComponentsCore::IComponent::qt_metacast(_clname);
}

int ComponentA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ComponentsCore::IComponent::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'r',  'u',  '.',  'i',  'n', 
    't',  'e',  'l',  't',  'e',  'c',  'h',  '.', 
    'Q',  't',  '.',  'C',  'o',  'm',  'p',  'o', 
    'n',  'e',  'n',  't',  'A', 
    // "className"
    0x03,  0x6a,  'C',  'o',  'm',  'p',  'o',  'n', 
    'e',  'n',  't',  'A', 
    // "MetaData"
    0x04,  0xa7,  0x69,  'A',  'r',  'g',  'u',  'm', 
    'e',  'n',  't',  's',  0x82,  0xa3,  0x6b,  'D', 
    'e',  's',  'c',  'r',  'i',  'p',  't',  'i', 
    'o',  'n',  0x6a,  'D',  'e',  'b',  'u',  'g', 
    ' ',  'm',  'o',  'd',  'e',  0x64,  'N',  'a', 
    'm',  'e',  0x67,  '-',  '-',  'd',  'e',  'b', 
    'u',  'g',  0x69,  'P',  'a',  'r',  'a',  'm', 
    'e',  't',  'e',  'r',  0x60,  0xa3,  0x6b,  'D', 
    'e',  's',  'c',  'r',  'i',  'p',  't',  'i', 
    'o',  'n',  0x76,  'D',  'o',  ' ',  'n',  'o', 
    't',  ' ',  'u',  's',  'e',  ' ',  'A',  'U', 
    'T',  'H',  ' ',  's',  'y',  's',  't',  'e', 
    'm',  0x64,  'N',  'a',  'm',  'e',  0x6c,  '-', 
    '-',  'u',  'n',  'u',  's',  'e',  '-',  'a', 
    'u',  't',  'h',  0x69,  'P',  'a',  'r',  'a', 
    'm',  'e',  't',  'e',  'r',  0x60,  0x6d,  'C', 
    'o',  'm',  'p',  'a',  't',  'V',  'e',  'r', 
    's',  'i',  'o',  'n',  0x65,  '1',  '.',  '0', 
    '.',  '0',  0x6c,  'D',  'e',  'p',  'e',  'n', 
    'd',  'e',  'n',  'c',  'i',  'e',  's',  0x80, 
    0x6b,  'D',  'e',  's',  'c',  'r',  'i',  'p', 
    't',  'i',  'o',  'n',  0x6b,  'C',  'o',  'm', 
    'p',  'o',  'n',  'e',  'n',  't',  ' ',  'A', 
    0x64,  'N',  'a',  'm',  'e',  0x6a,  'C',  'o', 
    'm',  'p',  'o',  'n',  'e',  'n',  't',  'A', 
    0x66,  'V',  'e',  'n',  'd',  'o',  'r',  0x69, 
    'I',  'n',  't',  'e',  'l',  't',  'e',  'c', 
    'h',  0x67,  'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x65,  '1',  '.',  '0',  '.',  '0', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ComponentA, ComponentA)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
