// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file ViveStub.h 
 * @brief Vive client stub header wrapper code
 * @date Thu Aug  2 21:43:41 2018 
 *
 */

#ifndef _VIVESTUB_H
#define _VIVESTUB_H



#include <rtm/config_rtc.h>
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#if   defined ORB_IS_TAO
#  include "ViveC.h"
#elif defined ORB_IS_OMNIORB
#  if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#    undef USE_stub_in_nt_dll
#  endif
#  include "Vive.hh"
#elif defined ORB_IS_MICO
#  include "Vive.h"
#elif defined ORB_IS_ORBIT2
#  include "Vive-cpp-stubs.h"
#elif defined ORB_IS_RTORB
#  include "Vive.h"
#else
#  error "NO ORB defined"
#endif

#endif // _VIVESTUB_H
