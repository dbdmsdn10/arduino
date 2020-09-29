void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(2,INPUT);
}
'///
void loop() {
  // put your main code here, to run repeatedly:
int sensor=analogRead(A0);
Serial.println(sensor);
if(sensor<400){
  digitalWrite(12,HIGH);
  }
  else if(digitalRead(2)==HIGH){
    digitalWrite(12,HIGH);
    }
    else{
      digitalWrite(12,LOW);
      }
}
