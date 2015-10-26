#ifndef EMERGENCY_CENTER_H
#define EMERGENCY_CENTER_H

#include "SensorComponent.h"
#include "group.h"

class EmergencyCenter
{
  public:
    EmergencyCenter();
    ~EmergencyCenter();
    bool add_component(SensorComponent * component); 
    bool add_component(SensorComponent * component, Group * parentGroup); 
        //    void destroyComponent();
    bool activate_component(SensorComponent * s);
    bool deactivate_component(SensorComponent *s);
    bool test_component(SensorComponent *s);


//    void add_action_to_component(Action * a, SensorComponent * s);
//    void delete_action_from_component(Action * a, SensorComponent * s);
 //   vector<SensorComponent *> getSensors();

  private:
    vector<SensorComponent *> getSensorsFromGroup(vector<SensorComponent *> c);
    vector<SensorComponent *> _sensors;
    Group * main_group;
};
#endif
