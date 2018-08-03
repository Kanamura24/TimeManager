// -*- C++ -*-
/*!
 * @file  TImeManagerTest.cpp
 * @brief TimeManager
 * @date $Date$
 *
 * $Id$
 */

#include "TImeManagerTest.h"

// Module specification
// <rtc-template block="module_spec">
static const char* timemanager_spec[] =
  {
    "implementation_id", "TImeManagerTest",
    "type_name",         "TImeManagerTest",
    "description",       "TimeManager",
    "version",           "1.0.0",
    "vendor",            "G2",
    "category",          "VIveController",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
TImeManagerTest::TImeManagerTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_startTriggerIn("startTrigger", m_startTrigger),
    m_measureTImeOut("measureTime", m_measureTIme)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
TImeManagerTest::~TImeManagerTest()
{
}



RTC::ReturnCode_t TImeManagerTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("measureTime", m_measureTImeIn);
  
  // Set OutPort buffer
  addOutPort("startTrigger", m_startTriggerOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TImeManagerTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t TImeManagerTest::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TImeManagerTest::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TImeManagerTest::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TImeManagerTest::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManagerTest::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void TImeManagerTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(timemanager_spec);
    manager->registerFactory(profile,
                             RTC::Create<TImeManagerTest>,
                             RTC::Delete<TImeManagerTest>);
  }
  
};


