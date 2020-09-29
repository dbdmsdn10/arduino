#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";

void setup() {
  Serial.begin(9600);
Blynk.begin(auth,ssid,pass);
pinMode(D0,OUTPUT);
}


void loop() {
int val=analogRead(A0);
Serial.println(val);
Blynk.virtualWrite(V0,val);
if(val<250){
  digitalWrite(D0, HIGH);
  }
  else{
     digitalWrite(D0, LOW);
    }
Blynk.run();
}
