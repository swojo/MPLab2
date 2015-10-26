#include <iostream>
#include "sensor.h"
#include "fire_brigade.h"
#include "call_police.h"
#include "evacuate.h"
#include "action.h"
#include "smoke_detector.h"
#include "motion_sensor.h"
#include "gas_sensor.h"
#include "group.h"
#include "emergency_center.h"


int main()
{
//    Sensor sensor1(1,"kul", "fire");
  //  sensor1.test();



    Smoke_detector s(1, "kul", "smoke!", 30);
 //  s.activate();
    Call_police * c = new Call_police();
    s.setActions(c);

    Motion_Sensor m(1, "kul", "motion!", 1, 3);
  //  m.activate();
    Evacuate * e = new Evacuate();
    m.setActions(c);
    m.setActions(e);

    Gas_sensor g(1, "kul", "gas!");
  //  g.activate();
    g.setActions(c);
    g.setActions(e);
    g.setGasType("CO2");
  
    EmergencyCenter center;

    Group g1("building");
    center.add_component(&g1);
    center.add_component(&s, &g1);

    Group g2("room");
    center.add_component(&g2, &g1);
    center.add_component(&m, &g2);
    center.add_component(&g, &g2);

    cout << g1.getComponents().size() << endl;
    cout << g2.getComponents().size() << endl;
    
//    center.getSensors();

    return 0;
}

