void setup() {//오른쪽위 윈도우창 열어서 a입력시 불켜짐
  //연결시 12번을 +쪽에 해야함
pinMode(12,OUTPUT);
Serial.begin(9600);
}

void loop() {
  char command;

  if(Serial.available()>0){
    command=Serial.read();
    if(command=='a'){
      digitalWrite(12,HIGH);
      }
      else{
        digitalWrite(12,LOW);
        }
    }
}
