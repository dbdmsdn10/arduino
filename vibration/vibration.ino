void setup() {

pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
delay(3000);
digitalWrite(3,LOW);
delay(3000);
}
