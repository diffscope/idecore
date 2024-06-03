#ifndef IDECOREFRAMEWORKGLOBAL_H
#define IDECOREFRAMEWORKGLOBAL_H

#include <QtGlobal>

#ifndef IDECORE_FRAMEWORK_EXPORT
#  ifdef IDECORE_FRAMEWORK_STATIC
#    define IDECORE_FRAMEWORK_EXPORT
#  else
#    ifdef IDECORE_FRAMEWORK_LIBRARY
#      define IDECORE_FRAMEWORK_EXPORT Q_DECL_EXPORT
#    else
#      define IDECORE_FRAMEWORK_EXPORT Q_DECL_IMPORT
#    endif
#  endif
#endif

#endif // IDECOREFRAMEWORKGLOBAL_H