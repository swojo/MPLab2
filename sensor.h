#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include "action.h"
#include <vector>
using namespace std;

class Sensor
{


public:
    Sensor(int id, string vendor, string alarm, bool status = false);
    ~Sensor();
    void setActions(Action * act);
    void test();
private:
    int _id;
    bool _status;
    string _vendor;
    string _alarm;
    vector<Action *> _actions;
};

#endif // SENSOR_H
