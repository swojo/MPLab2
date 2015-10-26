#include <iostream>
#include "sensor.h"
#include <sstream>

using namespace std;

Sensor::Sensor(int id, string vendor, string alarm,  bool status)
  :SensorComponent(status)
{
    _id = id;
    _vendor = vendor;
    _alarm = alarm;
    type = sensor;
}

Sensor::~Sensor()
{

}

bool Sensor::setActions(Action * act)
{
    if(act == nullptr)
      return false;

    for(Action * cur_act : _actions){
        if(act == cur_act)
            return false;
    }
    _actions.push_back(act);
    return true;
}

void Sensor::activate()
{
  setStatus(true);
}

void Sensor::deactivate()
{
  setStatus(false);
}


void Sensor::test()
{
  if(getStatus())
  {
    cout << _alarm << endl;
    for(Action * cur_act: _actions){
        cur_act->execute_action();
      }
  }
}

string Sensor::Information() 
{
  stringstream result;
  result << "ID: " << _id << endl;
  result << "Vendor: " << _vendor << endl;
  result << "Alarm: " << _alarm << endl;
  if(getStatus())
    result << "Status: On" << endl;
  else
    result << "Status: Off" << endl;
  return result.str();
}

ostream & operator<<(std::ostream & os, Sensor  *s)
{
  os << s->Information();
  return os;
}

