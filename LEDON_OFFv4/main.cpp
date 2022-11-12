#include "states.h"
#include "finitestate.h"
#include<ctime>
using std::cout;
using std::cin;
string cqueue[5];
int front = -1, rear = -1, n=5,count=0;
void insertCQ();
void displayCQ();
int main()
{
    
    Fsm fsm(new LedOff);
    


    
  
    for(int i=0;i<5;i++){
        
        fsm.run();
        insertCQ();
    }
        displayCQ();
  
    return 0;
}
 void insertCQ() {
    time_t tmNow = time(0);
    string dt = ctime(&tmNow);
    string val=dt;
   if(count>n) count=n;
   rear=(rear+1)%n;
   cqueue[rear]=val;
   count++;
}
void displayCQ() {
   int f = front, r = rear;
   f=(r+1)%n;
   cout<<"The Buffer stored is:"<<endl;
   for(int i=1;i<=count;i++){
      cout<<cqueue[f]<<endl;
      f=(f+1)%n;
   }
}