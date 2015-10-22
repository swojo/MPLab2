#ifndef FIRE_BRIGADE_H
#define FIRE_BRIGADE_H
#include <iostream>
#include"action.h"
class Fire_brigade:public Action
{
public:
    Fire_brigade();
    void execute_action();
};

#endif // FIRE_BRIGADE_H
