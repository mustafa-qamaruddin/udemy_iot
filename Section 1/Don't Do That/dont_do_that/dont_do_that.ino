void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long sensor = analogRead(A5);
  Serial.println(sensor);
  long minutes = 1000 * 60 * 10;  // 10 minutes  // try with integer!!!
  delay(minutes);
}
