//  analog read serial

#include<Arduino.h>

void setup(){
    int sensorValue ;
    int inputValue= 10
    Serial.begin(9600);
}

void loop(){
   int sensorValue = analogRead(inputValue)

}