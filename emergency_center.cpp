#include <iostream>
#include "emergency_center.h"

EmergencyCenter::EmergencyCenter(){
  main_group = new Group("Center");
}

EmergencyCenter::~EmergencyCenter(){
}

bool EmergencyCenter::add_component(SensorComponent * component){
  if(component  == nullptr)
    return false;
  
  main_group->addComponent(component);
  return true;
}

bool EmergencyCenter::add_component(SensorComponent * component, Group * parentGroup){
  if(parentGroup == nullptr || component == nullptr)
    return false;

  parentGroup->addComponent(component);
  return true;
}

bool EmergencyCenter::activate_component(SensorComponent * s){
  if(s == nullptr)
    return false;
  
  s->activate();
  return true;
}

bool EmergencyCenter::deactivate_component(SensorComponent * s){
  if(s == nullptr)
    return false;
  s->deactivate();
  return true;
}

bool EmergencyCenter::test_component(SensorComponent *s){
  if(s == nullptr)
    return false;

  s->test();
  return true;
}

/*

vector<SensorComponent *> EmergencyCenter::getSensors(){
  getSensorsFromGroup(main_group->getComponents());
}

vector<SensorComponent *> EmergencyCenter::getSensorsFromGroup(vector<SensorComponent *> c){
  for(SensorComponent * curr : c){
    if(curr->type == group ){
      cout << "I'm a group!" <<endl;
      getSensorsFromGroup(((Group *)curr)->getComponents());
    }
    else{
      cout << "adding sensor" <<endl;
      _sensors.push_back(curr);
    }
  }
  return _sensors;
}

*/


