#ifndef COMPONENTB_GLOBAL_H
#define COMPONENTB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(COMPONENTB_LIBRARY)
#  define COMPONENTB_EXPORT Q_DECL_EXPORT
#else
#  define COMPONENTB_EXPORT Q_DECL_IMPORT
#endif

#endif // COMPONENTB_GLOBAL_H
