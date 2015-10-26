#include "group.h"


Group::Group(string name, bool status)
  :SensorComponent(status)
{
  _name= name;
  type = group;
}

Group::~Group()
{
}

bool Group::addComponent(SensorComponent * c){
  if(c == nullptr)
    return false;

  _components.push_back(c);
  return true;
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


  
