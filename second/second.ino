
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);//꼭대문자 소문자 구분
  pinMode(12, OUTPUT);
}

//깜빡이는거 설정하는프로그램
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, LOW);
  delay(1500);                       // wait for a second
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1500);                       // wait for a second
}
