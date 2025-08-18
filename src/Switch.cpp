#include <Arduino.h>

void initSwitch(int switchPin, int ledOn, int ledOff) {
    pinMode(switchPin, INPUT);
    pinMode(ledOn, OUTPUT);
    pinMode(ledOff, OUTPUT);
}

void doSwitch(int switchPin, int ledOn, int ledOff) {
    if(digitalRead(switchPin) == HIGH) {
        digitalWrite(ledOn, HIGH);
        digitalWrite(ledOff, LOW);
    } else {
        digitalWrite(ledOn, LOW);
        digitalWrite(ledOff, HIGH);
    }
}