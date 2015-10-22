#ifndef EVACUATE_H
#define EVACUATE_H
#include <iostream>
#include"action.h"
class Evacuate:public Action
{
public:
    Evacuate();
    void execute_action();
};

#endif // EVACUATE_H
