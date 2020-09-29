void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(2,INPUT);
pinMode(11,OUTPUT);
}
int b=0;
int c=12;
void loop() {
  // put your main code here, to run repeatedly:
int sensor=analogRead(A0);
Serial.println(sensor);
if(sensor<400){
  digitalWrite(c,HIGH);
  b=1;
  }
  else if(digitalRead(2)==HIGH){
    digitalWrite(c,HIGH);
    b=1;
    }
    else{
      digitalWrite(c,LOW);
      if(b==1){
        if(c!=12){
          c=12;
          }
          else{c=11;}
          b=0;
        }
       b=0;
      }
}
