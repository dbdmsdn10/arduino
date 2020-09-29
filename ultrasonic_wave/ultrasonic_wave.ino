void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor=analogRead(A0);
float distance=12343.85*pow(sensor,-1.15);
Serial.println(distance);
delay(50);
}
