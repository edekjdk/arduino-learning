#include <Arduino.h>
#include "Blink.h"

void initBlink(int pin) {
    pinMode(pin, OUTPUT);
}

void doBlink(int pin, int delayMs) {
    digitalWrite(pin, HIGH);
    delay(delayMs);
    digitalWrite(pin, LOW);
    delay(delayMs);
}