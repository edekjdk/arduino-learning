#include <Arduino.h>
#include <Switch.h>

const int SWITCH_PIN = 8;
const int LED_ON_PIN = 9;
const int LED_OFF_PIN = 10;


void setup() {
    initSwitch(SWITCH_PIN, LED_ON_PIN, LED_OFF_PIN);
}


void loop() {
  doSwitch(SWITCH_PIN, LED_ON_PIN, LED_OFF_PIN);
}

