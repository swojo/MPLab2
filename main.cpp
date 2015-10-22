#include <iostream>
#include "sensor.h"
#include "fire_brigade.h"
#include "call_police.h"
#include "evacuate.h"
#include "action.h"
#include "smoke_detector.h"
#include "motion_sensor.h"
using namespace std;

int main()
{
    Sensor sensor1(1,"kul", "fire");
    sensor1.test();

    Smoke_detector s(1, "kul", "smoke!", 30);
    Call_police * c = new Call_police();
    s.setActions(c);
    s.test();


    Motion_Sensor m(1, "kul", "motion!", 1, 3);
    Evacuate * e = new Evacuate();
    m.setActions(c);
    m.setActions(e);
    m.test();

    cout << &m;
    cout << &s;

    return 0;
}

