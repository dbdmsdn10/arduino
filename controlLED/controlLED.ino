void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<255;i++){
      analogWrite(11,i);

       for(int j=0;j<255;j++){
         analogWrite(12,j);

          }
      delay(50);
  }
  
}
