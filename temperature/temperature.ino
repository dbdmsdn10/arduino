void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(A0);
  float v=value*5.0/1023.0;
  float temp=v*100.0-50;
Serial.println(temp);
if(temp>31.5){
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
  }
  else{
    digitalWrite(12,HIGH);
     digitalWrite(11,LOW);
    }
}
