#ifndef SENSORCOMPONENT_H
#define SENSORCOMPONENT_H

#include <vector>

enum ComponentType{
  sensor,
  group
};

class SensorComponent
{
  public:
    SensorComponent(bool _status);
    ~SensorComponent();
    virtual void activate() =0;
    virtual void deactivate()=0;
    bool getStatus();
    void setStatus(bool status);
    virtual void test()=0;
//    virtual string Information();
    ComponentType type;

  private:
    bool _status; 
}; 



#endif
