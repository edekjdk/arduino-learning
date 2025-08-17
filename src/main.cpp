#include <Arduino.h>
#include <Blink.h>

const int LED_PIN = 8;
const int DELAY_BLINK = 1000;

void setup() {
    initBlink(LED_PIN);
}


void loop() {
  doBlink(LED_PIN, DELAY_BLINK);
}

