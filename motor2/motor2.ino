#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
myservo.attach(9);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor=analogRead(A0);
Serial.println(sensor/6);
myservo.write(sensor/6);
}
