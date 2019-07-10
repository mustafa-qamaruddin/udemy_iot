#include <SoftwareSerial.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(101);
}

void loop() {
  // put your main code here, to run repeatedly:
  long x = random(-10, 10);
  Serial.println(x);
}
