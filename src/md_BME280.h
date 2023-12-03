
/* @file md_BME280.h
 *
 * required libraries:
 *   - adafruit/Adafruit BME280 Library
 * Adafruit BME280 Library automaticaly includes
 *   - adafruit/Adafruit BusIO
 *   - adafruit/Adafruit_Sensor
 *
 * Designed to work with the Adafruit BME280 Breakout and uses Adafruit libraries
 * Sensors are only used via I2C
 *
 * md_BME280 library is an extension for easy integration into active source code
 *   - additional filtering
 *   - TODO
 *
 * autor: Martin Dorfner email: inbox@martin-dorfner.at
 */

#ifndef _MD_BME280_H_
  #define _MD_BME280_H_

  #include <Arduino.h>
  #include <Adafruit_BME280.h>
  #include <md_util.h>

  class md_BME280_T : public Adafruit_BME280_Temp
    {
    };
  class md_BME280_P : public Adafruit_BME280_Pressure
    {
    };
  class md_BME280_H : public Adafruit_BME280_Humidity
    {
    };
  class md_BME280 : public Adafruit_BME280
    {
    };

#endif // _MD_BME280_H_
