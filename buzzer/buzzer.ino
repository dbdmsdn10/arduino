int tones[]={281,294,330,349,392,440,494,523};

void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<8;i++){
  tone(9,tones[i]);
  delay(500);
  noTone(9);
  delay(1000);
  }
  
}
