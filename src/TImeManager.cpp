﻿// -*- C++ -*-
/*!
 * @file  TImeManager.cpp
 * @brief TimeManager
 * @date $Date$
 *
 * $Id$
 */

#include "TImeManager.h"
#include <coil/TimeValue.h>
#include <coil/Time.h>

// Module specification
// <rtc-template block="module_spec">
static const char* timemanager_spec[] =
  {
    "implementation_id", "TImeManager",
    "type_name",         "TImeManager",
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
TImeManager::TImeManager(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_startTriggerIn("startTrigger", m_startTrigger),
    m_measureTimeOut("measureTime", m_measureTime)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
TImeManager::~TImeManager()
{
}



RTC::ReturnCode_t TImeManager::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("startTrigger", m_startTriggerIn);
  
  // Set OutPort buffer
  addOutPort("measureTime", m_measureTimeOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TImeManager::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t TImeManager::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TImeManager::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t TImeManager::onExecute(RTC::UniqueId ec_id)
{

  	bool measureTimeFlag = false;

	time_t timer;
	coil::TimeValue nowTime;
	coil::TimeValue startTime;

	if (m_startTriggerIn.isNew())
	{
		m_startTriggerIn.read();

		if (m_startTrigger.seq[0].triger > 1.0){	//計測を開始したら

			measureTimeFlag = true;
			timer = time(NULL);
			startTime = coil::gettimeofday();	//開始時間の測定
		
			
			
		}
	}

	if (measureTimeFlag == true){	//計測開始しているなら
		//現在時刻の測定
		timer = time(NULL);
		nowTime = coil::gettimeofday();
		
		
   		//経過時間[sec]の計算
		m_measureTime.data = nowTime.sec() - startTime.sec();
		std::cout << "Hello" << std::endl;
		std::cout << nowTime << std::endl;
		std::cout << startTime << std::endl;
		
		std::cout << m_measureTime.data << std::endl;
		m_measureTimeOut.write();
	}

  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TImeManager::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TImeManager::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void TImeManagerInit(RTC::Manager* manager)
  {
    coil::Properties profile(timemanager_spec);
    manager->registerFactory(profile,
                             RTC::Create<TImeManager>,
                             RTC::Delete<TImeManager>);
  }
  
};


