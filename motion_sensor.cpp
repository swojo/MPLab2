#include "motion_sensor.h"
#include <sstream>



Motion_Sensor::Motion_Sensor(int id, string vendor, string alarm, int minDistance, int maxDistance)
  :Sensor(id, vendor, alarm)
{
  _range.push_back(minDistance);
  _range.push_back(maxDistance);
}

void Motion_Sensor::setRange(int minDistance, int maxDistance)
{
  _range[0]=minDistance;
  _range[0]=maxDistance;
}

std::vector<int> Motion_Sensor::getRange()
{
  return _range;
}

string Motion_Sensor::Information()
{
  stringstream info;
  info << Sensor::Information();
  vector<int> range = getRange();
  info << "Minimum Distance: " << range[0] << endl;
  info << "Maximum Distance: " << range[1] << endl;
  return info.str();
}
