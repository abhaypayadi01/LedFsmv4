#pragma once
#ifndef STATES_H
#define STATES_H

#include "finitestate.h"

class LedOn: public State {
  public:
    
    void enter();
    void update();
    void exit();
    
};
class LedOff : public State
{
public:
    void enter();
    void update();
    void exit();
    

   

};
 

#endif