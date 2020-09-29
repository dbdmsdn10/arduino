#include <SoftwareSerial.h>
int bluetx=12;
int bluerx=13;
SoftwareSerial myserial(bluetx,bluerx);
void setup() {
Serial.begin(9600);
myserial.begin(9600);
}

void loop() {
if(myserial.available()){
  Serial.write(myserial.read());
  }
  if(Serial.available()){
    myserial.write(Serial.read());
    }

    
}
