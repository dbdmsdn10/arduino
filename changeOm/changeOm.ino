void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor=analogRead(A0);
  float volt=sensor*(0.5/1023.0);
  Serial.println(volt,4);
}
