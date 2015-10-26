#ifndef GROUP_H
#define GROUP_H

#include "SensorComponent.h"
#include <vector>
#include <string>

using namespace std;

class Group:public SensorComponent
{
  public:
    Group(string name, bool status = false);
    ~Group();
    bool addComponent(SensorComponent * c);
//    void deleteComponent(SensorComponent * c);
    vector<SensorComponent *> getComponents();
    void activate();
    void deactivate();
    void test();
    
  private:
    string _name;
    vector<SensorComponent *> _components;

};

#endif
