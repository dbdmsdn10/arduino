void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(2,INPUT);
pinMode(12,OUTPUT);
}
int a=0;
void loop() {
  // put your main code here, to run repeatedly:
int switchState=digitalRead(2);
  if(switchState==1){
    a++;
  }
  else{
   a=0;
  }
  digitalWrite(13,switchState);
  if(a>1000){
  digitalWrite(12,switchState);}
}
