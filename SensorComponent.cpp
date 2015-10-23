#include "SensorComponent.h"

using namespace std;

SensorComponent::SensorComponent(bool status){
  _status = status;
}

SensorComponent::~SensorComponent()
{
}

bool SensorComponent::getStatus(){
  return _status;
}

void SensorComponent::setStatus(bool status){
  _status = status;
}

