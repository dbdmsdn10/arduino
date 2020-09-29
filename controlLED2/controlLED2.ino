void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
  int sensor=analogRead(A0);
  Serial.println(sensor/4.0);
  analogWrite(11,sensor/4.0);
}
