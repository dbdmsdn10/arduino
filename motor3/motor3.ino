int enablepin=5;
int in1pin=6;
int in2pin=9;
int switchpin=7;
int potpin=0;
int reverse=0;

void setup() {
  Serial.begin(9600);
  pinMode(in1pin,OUTPUT);
  pinMode(in2pin,OUTPUT);
  pinMode(enablepin,OUTPUT);
}

void loop() {
int speed=analogRead(potpin)/4;
Serial.println(speed);
setMotor(speed);
}

void setMotor(int speed){
  analogWrite(enablepin,speed);
  digitalWrite(in1pin,! reverse);
  digitalWrite(in2pin,reverse);
  delay(2000);

  }
