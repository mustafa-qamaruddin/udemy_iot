#include <SoftwareSerial.h>


const int SZ = 5;
byte data[SZ];
int counter = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for ( int i = 0; i < SZ; i++) {
    data[i] = 0x00;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if ( counter >= SZ) {
    return;
  }

  byte sensor = random(0, 255);

  data[counter] = sensor;

  for ( int i = 0; i < SZ; i++) {
    Serial.print(data[i]);
    Serial.print(",");
  }
  Serial.println();

  counter++;
  delay(2000);
  
}
