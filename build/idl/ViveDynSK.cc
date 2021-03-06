// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "Vive.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::PR_structMember _0RL_structmember_VIVE_mviveData[] = {
  {"deviceClass", CORBA::TypeCode::PR_long_tc()},
  {"deviceNum", CORBA::TypeCode::PR_long_tc()},
  {"posx", CORBA::TypeCode::PR_float_tc()},
  {"posy", CORBA::TypeCode::PR_float_tc()},
  {"posz", CORBA::TypeCode::PR_float_tc()},
  {"triger", CORBA::TypeCode::PR_float_tc()}
};

#ifdef _0RL_tc_VIVE_mviveData
#  undef _0RL_tc_VIVE_mviveData
#endif
static CORBA::TypeCode_ptr _0RL_tc_VIVE_mviveData = CORBA::TypeCode::PR_struct_tc("IDL:VIVE/viveData:1.0", "viveData", _0RL_structmember_VIVE_mviveData, 6, &_0RL_tcTrack);

#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace VIVE { 
  const ::CORBA::TypeCode_ptr _tc_viveData = _0RL_tc_VIVE_mviveData;
} 
#else
const ::CORBA::TypeCode_ptr VIVE::_tc_viveData = _0RL_tc_VIVE_mviveData;
#endif


static CORBA::PR_structMember _0RL_structmember_RTC_mTime[] = {
  {"sec", CORBA::TypeCode::PR_ulong_tc()},
  {"nsec", CORBA::TypeCode::PR_ulong_tc()}
};

#ifdef _0RL_tc_RTC_mTime
#  undef _0RL_tc_RTC_mTime
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mTime = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Time:1.0", "Time", _0RL_structmember_RTC_mTime, 2, &_0RL_tcTrack);


static CORBA::PR_structMember _0RL_structmember_VIVE_mviveSequence[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"seq", CORBA::TypeCode::PR_sequence_tc(0, _0RL_tc_VIVE_mviveData, &_0RL_tcTrack)}
};

#ifdef _0RL_tc_VIVE_mviveSequence
#  undef _0RL_tc_VIVE_mviveSequence
#endif
static CORBA::TypeCode_ptr _0RL_tc_VIVE_mviveSequence = CORBA::TypeCode::PR_struct_tc("IDL:VIVE/viveSequence:1.0", "viveSequence", _0RL_structmember_VIVE_mviveSequence, 2, &_0RL_tcTrack);



#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace VIVE { 
  const ::CORBA::TypeCode_ptr _tc_viveSequence = _0RL_tc_VIVE_mviveSequence;
} 
#else
const ::CORBA::TypeCode_ptr VIVE::_tc_viveSequence = _0RL_tc_VIVE_mviveSequence;
#endif


static void _0RL_VIVE_mviveData_marshal_fn(cdrStream& _s, void* _v)
{
  VIVE::viveData* _p = (VIVE::viveData*)_v;
  *_p >>= _s;
}
static void _0RL_VIVE_mviveData_unmarshal_fn(cdrStream& _s, void*& _v)
{
  VIVE::viveData* _p = new VIVE::viveData;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_VIVE_mviveData_destructor_fn(void* _v)
{
  VIVE::viveData* _p = (VIVE::viveData*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const VIVE::viveData& _s)
{
  VIVE::viveData* _p = new VIVE::viveData(_s);
  _a.PR_insert(_0RL_tc_VIVE_mviveData,
               _0RL_VIVE_mviveData_marshal_fn,
               _0RL_VIVE_mviveData_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, VIVE::viveData* _sp)
{
  _a.PR_insert(_0RL_tc_VIVE_mviveData,
               _0RL_VIVE_mviveData_marshal_fn,
               _0RL_VIVE_mviveData_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, VIVE::viveData*& _sp)
{
  return _a >>= (const VIVE::viveData*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const VIVE::viveData*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_VIVE_mviveData,
                    _0RL_VIVE_mviveData_unmarshal_fn,
                    _0RL_VIVE_mviveData_marshal_fn,
                    _0RL_VIVE_mviveData_destructor_fn,
                    _v)) {
    _sp = (const VIVE::viveData*)_v;
    return 1;
  }
  return 0;
}

static void _0RL_VIVE_mviveSequence_marshal_fn(cdrStream& _s, void* _v)
{
  VIVE::viveSequence* _p = (VIVE::viveSequence*)_v;
  *_p >>= _s;
}
static void _0RL_VIVE_mviveSequence_unmarshal_fn(cdrStream& _s, void*& _v)
{
  VIVE::viveSequence* _p = new VIVE::viveSequence;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_VIVE_mviveSequence_destructor_fn(void* _v)
{
  VIVE::viveSequence* _p = (VIVE::viveSequence*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const VIVE::viveSequence& _s)
{
  VIVE::viveSequence* _p = new VIVE::viveSequence(_s);
  _a.PR_insert(_0RL_tc_VIVE_mviveSequence,
               _0RL_VIVE_mviveSequence_marshal_fn,
               _0RL_VIVE_mviveSequence_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, VIVE::viveSequence* _sp)
{
  _a.PR_insert(_0RL_tc_VIVE_mviveSequence,
               _0RL_VIVE_mviveSequence_marshal_fn,
               _0RL_VIVE_mviveSequence_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, VIVE::viveSequence*& _sp)
{
  return _a >>= (const VIVE::viveSequence*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const VIVE::viveSequence*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_VIVE_mviveSequence,
                    _0RL_VIVE_mviveSequence_unmarshal_fn,
                    _0RL_VIVE_mviveSequence_marshal_fn,
                    _0RL_VIVE_mviveSequence_destructor_fn,
                    _v)) {
    _sp = (const VIVE::viveSequence*)_v;
    return 1;
  }
  return 0;
}

