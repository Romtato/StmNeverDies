
#include "mbed.h"

PwmOut led1(A1);
PwmOut led2(A2);
PwmOut led3(A3);

#define SLEEP_TIME                  1000 ;// (msec)
 float offset =0;
 float max1 = 0.02;

float change(PwmOut, PwmOut);

int main() {  
 while(1){

change(led1, led2);
wait(0.1f);
change(led2, led3);
wait(0.1f);
change(led3, led1);
wait(0.1f);
 }
} 

float change (  PwmOut  pwmOut1 , PwmOut  pwmOut2) {
for (offset = 0; offset<max1; offset+=0.001){
     pwmOut1.pulsewidth(0 + offset);
     pwmOut2.pulsewidth(max1 -offset);
     wait(0.1);
    }
return pwmOut1, pwmOut2;
}





