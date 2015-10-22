#include "smoke_detector.h"
#include <string>

Smoke_detector::Smoke_detector(int id, string vendor, string alarm, int sensitivity)
    :Sensor(id, vendor, alarm)
{
    _sensitivity = sensitivity;
}
int Smoke_detector::getSensitivity() const
{
    return _sensitivity;
}

void Smoke_detector::setSensitivity(int value)
{
    _sensitivity = value;
}

