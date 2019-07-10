long minutes;
double prev_millis;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  minutes = 600000;  // 10 minutes
  prev_millis = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  double current_millis = millis();  // why not use double or flot?
  if (current_millis - prev_millis >= minutes) {  // why not use modulus operator %?
    Serial.println(analogRead(A5));
    prev_millis = current_millis;
  }

  // Perform regular tasks without halt
}
