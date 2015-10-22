#ifndef GAS_SENSOR_H
#define GAS_SENSOR_H
#include<iostream>
#include<string>
#include"sensor.h"

class Gas_sensor:public Sensor
{
public:
    Gas_sensor(int id, std::string vendor, std::string alarm);
    std::string getGasType() const;
    void setGasType(const std::string &value);
    std::string toString() const;


private:
    std::string gasType;
};

#endif // GAS_SENSOR_H
