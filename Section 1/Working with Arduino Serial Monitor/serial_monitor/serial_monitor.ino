#include <SoftwareSerial.h>


int counter = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.print("Hello,");

  Serial.println("World!");
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("Loop:");

  Serial.println(counter++);
}
