#include <mbed.h>
#include <rtos.h>

DigitalIn but1(A2);
DigitalOut lazer1(A3);
Thread thread;
int bcheck = 0;
int  but_check()
{
  
    while(1)
    {
         bcheck = but1;
         wait(0.2);
    }
    return bcheck;
}
int main()
{
 thread.start(but_check);
 while(1)
 {
     if (bcheck == 1) lazer1 = 1,0;

 }

}





