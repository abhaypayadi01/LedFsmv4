#include "states.h"
#include<ctime>
using namespace std;

void LedOn::enter(){
    printf("led state: on \n");
    update();
    

}

void LedOn::update(){
   
    
    if (c=='p')
    {
      printf(" turning off the LED\n");
     fsm->Change_State(new LedOff);
    }
    
    

}
void LedOn :: exit(){


}
