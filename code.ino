#include <Arduino.h>
int X,Q,Z;
int A,B,C,D;
void disp_7447(int D,int C,int B,int A){
        digitalWrite(3,A);

}
void setup(){
        pinMode(5,INPUT);
        pinMode(6,INPUT);
        pinMode(13,OUTPUT);
        pinMode(2,OUTPUT);
}
void loop(){
        digitalWrite(13,LOW);
        delay(1000);
        Q=digitalRead(5);
        X=digitalRead(6);
        Z=(Q&&!X)||(!Q&&X);
        digitalWrite(2,Z);
//      digitalRead(3,A);
//      disp_7447(D,C,B,A);
        digitalWrite(13,HIGH);
        delay(1000);
}
