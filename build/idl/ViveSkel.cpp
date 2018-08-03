// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file ViveSkel.cpp 
 * @brief Vive server skeleton wrapper
 * @date Thu Aug  2 21:43:41 2018 
 *
 */

#include "ViveSkel.h"

#if defined ORB_IS_TAO
#  include "ViveC.cpp"
#  include "ViveS.cpp"
#elif defined ORB_IS_OMNIORB
#  include "ViveSK.cc"
#  include "ViveDynSK.cc"
#elif defined ORB_IS_MICO
#  include "Vive.cc"
#  include "Vive_skel.cc"
#elif defined ORB_IS_ORBIT2
#  include "Vive-cpp-stubs.cc"
#  include "Vive-cpp-skels.cc"
#elif defined ORB_IS_RTORB
#  include "OpenRTM-aist-decls.h"
#  include "Vive-common.c"
#  include "Vive-stubs.c"
#  include "Vive-skels.c"
#  include "Vive-skelimpl.c"
#else
#  error "NO ORB defined"
#endif

// end of ViveSkel.cpp
