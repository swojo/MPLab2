#ifndef SENSORCOMPONENT_H
#define SENSORCOMPONENT_H


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

  private:
    bool _status; 
}; 



#endif
