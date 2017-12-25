#include <Arduino.h>
#include <MsTimer2.h>

const int led_pin = LED_BUILTIN; // 1.0 built in LED pin var

void flash()
{
    static boolean output = HIGH;
    digitalWrite(led_pin, output);
    output = !output;
}

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);

    pinMode(led_pin, OUTPUT);

    MsTimer2::set(100, flash); // 500ms period
    MsTimer2::start();
}

void loop()
{
    // put your main code here, to run repeatedly:
    Serial.println("TEST STRING");
    delay(100);
}