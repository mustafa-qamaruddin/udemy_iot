String dec2hex(signed long val) {
  const int8_t SZ = 8;
  char buf[SZ];
  sprintf(buf, "%x", val);
  return buf;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  String str = dec2hex(134);
  Serial.println(str);
}

void loop() {
  // put your main code here, to run repeatedly:

}
