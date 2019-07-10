#include <SoftwareSerial.h>

SoftwareSerial s1(0, 1);

void setup() {
  // put your setup code here, to run once:
  s1.begin(9600);

  while(!s1){}
}

void loop() {
  // put your main code here, to run repeatedly:
  if ( s1.available()) {
    s1.write(s1.read());
  }
}
