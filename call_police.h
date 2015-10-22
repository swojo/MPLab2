#ifndef CALL_POLICE_H
#define CALL_POLICE_H
#include<iostream>
#include"action.h"
class Call_police:public Action
{
public:
    Call_police();
    void execute_action();
};

#endif // CALL_POLICE_H
