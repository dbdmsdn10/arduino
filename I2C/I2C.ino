#include<Wire.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
byte count=0;
Serial.println("I2C Scanner");
for(byte i=9;i<120;i++){
  Wire.beginTransmission(i);
  if(Wire.endTransmission()==0){
    Serial.println("Found address: ");
    Serial.print(i,DEC);
    Serial.print(" (0x");
    Serial.print(i,HEX);
    Serial.println(")");
    count++;
    delay(i);
    }
  }
Serial.println("done");
Serial.print("found  ");
Serial.print(count,DEC);
Serial.println("  device(s).");
delay(1000);

  
}
