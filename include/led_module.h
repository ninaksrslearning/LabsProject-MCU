#include <Arduino.h>

// initialize LED module
void init_LED(int pin){
    pinMode(pin, OUTPUT);
}   
void on_LED(int pin ,int duration){
    digitalWrite(pin, HIGH); // Turn the LED on (HIGH is the voltage level)
    delay(duration);
}
void off_LED(int pin ,int duration){
    digitalWrite( pin, LOW); // Turn the LED on (HIGH is the voltage level)
    delay(duration);
}
