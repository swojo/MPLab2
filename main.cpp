#include <iostream>
#include "sensor.h"
#include "fire_brigade.h"
#include "call_police.h"
#include "evacuate.h"
#include "action.h"
#include "smoke_detector.h"
using namespace std;

int main()
{
    Sensor sensor1(1,"kul", "fire");
    sensor1.test();


    Smoke_detector s(1, "kul", "smoke!", 30);
    Call_police * c = new Call_police();
    s.setActions(c);
    s.test();



    return 0;
}

