void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // String(val)
  Serial.println(String(134));

  // String(val, base)
  Serial.println(String(134, DEC));
  Serial.println(String(134, HEX));
  Serial.println(String(134, BIN));

  // String(val, decimalPlaces)
  Serial.println(String(134.6666666666667, 0));
  Serial.println(String(134.6666666666667, 1));
  Serial.println(String(134.6666666666667, 2));
  Serial.println(String(134.6666666666667, 3));
}

void loop() {
  // put your main code here, to run repeatedly:

}
