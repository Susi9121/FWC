#include <Arduino.h>
int X,Q,Z;
void setup(){
        pinMode(5,INPUT); T
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
        digitalWrite(13,HIGH);
        delay(1000);
}
