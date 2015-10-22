#include "gas_sensor.h"
#include <sstream>

Gas_sensor::Gas_sensor(int id, std::string vendor, std::string alarm)
    :Sensor(id, vendor, alarm)
{
}
std::string Gas_sensor::getGasType() const
{
    return gasType;
}

void Gas_sensor::setGasType(const std::string &value)
{
    gasType = value;
}

string Gas_sensor::toString() const
{
    std::stringstream info;
    info<<Sensor::toString();
    info<<gasType;
    return info.str();
}

