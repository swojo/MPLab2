#include "group.h"


Group::Group(string name, bool status)
  :SensorComponent(status)
{
  _name= name;
}

Group::~Group()
{
}

void Group::addComponent(SensorComponent * c){
  _components.push_back(c);
}

/*void Group::deleteComponent(SensorComponent * c){
  for(int i=0; i < _components.size(); i++){
    if(_components[i] == c){
      _components.erase(i);
    }
  }
}
*/

vector<SensorComponent *> Group::getComponents(){
  return _components;
}

void Group::activate(){
  for(SensorComponent * cur_comp : _components){
    cur_comp->activate();
  }
}

void Group::deactivate(){
  for(SensorComponent * cur_comp : _components){
    cur_comp->deactivate();
  }
}

void Group::test(){
  for(SensorComponent * cur_comp : _components){
    cur_comp->test();
  }
}


  
