#include <SoftwareSerial.h>

void setup() {
  // put your setup code here, to run once:
//  noInterrupts();
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2), fireme, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(micros());
  noInterrupts();
  // perform some logic
  interrupts();
  delay(2000);
}

void fireme() {
  Serial.println("Hi, Interrupt!");
//  detachInterrupt(digitalPinToInterrupt(2));
}
