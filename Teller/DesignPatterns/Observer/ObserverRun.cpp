﻿/*************************************
/  FILE:ObserverRun.cpp
/  TIME:2015-10-03 23:15:28
/AUTHOR:huoyao
/  INFO:
/*************************************/
#if 0

#include <iostream>
#include "Observer.h"
#include "WeatherData.h"
#include "TemperatureHumidityDisplay.h"
#include "PressureDisplay.h"
#include "../MemoryLeakChecker.h"
using namespace std;

int main()
{
  WeatherData *subject = new WeatherData();
  Observer *temp_humidity = new TemperatureHumidityDisplay(subject);
  Observer *press = new PressureDisplay(subject);
  subject->SetStatus(1.0, 1.0, 10);
  subject->SetStatus(2.0, 2.0, 20);
  delete temp_humidity;
  delete press;
  delete subject;

  atexit(checkMemoryLeak);
  system("pause");
  return 0;
}

#endif