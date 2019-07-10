String decimal2binary(unsigned long val) {
  const uint8_t SZ = 8;
  char* buff = (char*) malloc(SZ);
  itoa(val, buff, 2);
  return buff;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  String str = decimal2binary(134);
  Serial.println(str);
}

void loop() {
  // put your main code here, to run repeatedly:

}
