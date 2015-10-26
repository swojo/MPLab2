#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include "action.h"
#include <sstream>
#include <vector>
#include "SensorComponent.h"
using namespace std;

class Sensor:public SensorComponent 
{


public:
    Sensor(int id, string vendor, string alarm, bool status = false);
    ~Sensor();
    bool setActions(Action * act);
    void test();
    void activate();
    void deactivate();
//    bool getStatus();
    virtual string Information();
private:
    int _id;
//    bool _status;
    string _vendor;
    string _alarm;
    vector<Action *> _actions;
};


ostream & operator<<(ostream &os, Sensor * s);

#endif // SENSOR_H
