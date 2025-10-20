#include <Arduino.h>
#include "led_module.h"

void setup() {
  // put your setup code here, to run once:
  init_LED(LED_BUILTIN);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("LED on");
  on_LED(LED_BUILTIN, 500);
  Serial.println("LED off");
  off_LED(LED_BUILTIN, 500);
}
