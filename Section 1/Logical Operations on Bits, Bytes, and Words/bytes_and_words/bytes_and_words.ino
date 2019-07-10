#include <SoftwareSerial.h>


word one = 0x1;
word full = 0xFFFF;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//
//  word x = 0xD1D1;
//  word y = 0x1D1D;
//
//  Serial.println("Logical AND:");
//  Serial.println(x & y);
}

void loop() {
  // put your main code here, to run repeatedly:
  full >>= 2;
  Serial.println(full);
  delay(2000);
}
