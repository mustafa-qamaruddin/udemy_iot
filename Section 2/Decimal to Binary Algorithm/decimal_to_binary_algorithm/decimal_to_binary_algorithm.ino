String decimal2binary(unsigned long value) {
  const uint8_t SZ = 9;
  char* buff = new char[SZ];

  for ( uint8_t j = 0; j < SZ - 1; j++) {
    buff[j] = '0';
  }
  
  uint8_t i = SZ - 2;
  while ( value > 0 ) {
    if ( value % 2 != 0 ) {
      buff[i] = '1';
    }

    value = value >> 1;
    i--;
  }
  buff[SZ - 1] = '\0';
  return buff;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  String str = decimal2binary(134);
  Serial.println(str);

  str = decimal2binary(23);
  Serial.println(str);
}

void loop() {
  // put your main code here, to run repeatedly:

}
