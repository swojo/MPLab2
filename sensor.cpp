#include <iostream>
#include "sensor.h"

using namespace std;

Sensor::Sensor(int id, string vendor, string alarm, bool status)
{
    _id = id;
    _vendor = vendor;
    _alarm = alarm;
    _status = status;

}

Sensor::~Sensor()
{

}

void Sensor::setActions(Action * act)
{
    for(Action * cur_act : _actions){
        if(act == cur_act)
            return;
    }
    _actions.push_back(act);

}

void Sensor::test()
{
   cout << _alarm << endl;
   for(Action * cur_act: _actions){
        cur_act->execute_action();
    }
}
