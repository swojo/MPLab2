#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H

#include "sensor.h"

class Motion_Sensor:public Sensor
{
public:
    Motion_Sensor(int id, string vector, string alarm, int minDistance, int maxDistance);
    void setRange(int minDistance, int maxDistance);
    std::vector<int> getRange();
    string Information();

private:
    std::vector<int> _range;
};

#endif // MOTION_SENSOR_H
