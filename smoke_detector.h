#ifndef SMOKE_DETECTOR_H
#define SMOKE_DETECTOR_H

#include "sensor.h"

class Smoke_detector:public Sensor
{
public:
    Smoke_detector(int id, string vendor, string alarm, int sensitivity);
    int getSensitivity() const;
    void setSensitivity(int value);
    string Information();
private:
    int _sensitivity;
};

#endif // SMOKE_DETECTOR_H
