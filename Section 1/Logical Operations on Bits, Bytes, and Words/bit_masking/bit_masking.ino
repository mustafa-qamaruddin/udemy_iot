#include <SoftwareSerial.h>




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  byte one = B00100000;
  byte full = 0xFF;

  byte output = full & one;
  Serial.println(output);
  
}

void loop() {
}
