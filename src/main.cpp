#include <Arduino.h>
#include "led_module.h"

void setup() {
  // put your setup code here, to run once:
  init_LED(LED_BUILTIN);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
<<<<<<< HEAD
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("on");           
  delay(200);            
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("off");          
  delay(200);                       // wait for a second
=======
  Serial.println("LED on");
  on_LED(LED_BUILTIN, 500);
  Serial.println("LED off");
  off_LED(LED_BUILTIN, 500);
>>>>>>> dafa5f026a5fdc5a6ab92dc0b71956fb170feb9f
}
