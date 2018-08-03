// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "Vive.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



void
VIVE::viveData::operator>>= (cdrStream &_n) const
{
  deviceClass >>= _n;
  deviceNum >>= _n;
  posx >>= _n;
  posy >>= _n;
  posz >>= _n;
  triger >>= _n;

}

void
VIVE::viveData::operator<<= (cdrStream &_n)
{
  (::CORBA::Long&)deviceClass <<= _n;
  (::CORBA::Long&)deviceNum <<= _n;
  (::CORBA::Float&)posx <<= _n;
  (::CORBA::Float&)posy <<= _n;
  (::CORBA::Float&)posz <<= _n;
  (::CORBA::Float&)triger <<= _n;

}

void
VIVE::viveSequence::operator>>= (cdrStream &_n) const
{
  (const RTC::Time&) tm >>= _n;
  (const _CORBA_Unbounded_Sequence< viveData > &) seq >>= _n;

}

void
VIVE::viveSequence::operator<<= (cdrStream &_n)
{
  (RTC::Time&)tm <<= _n;
  (_CORBA_Unbounded_Sequence< viveData > &)seq <<= _n;

}
