#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";

int pinvalue;

void setup() {
Blynk.begin(auth,ssid,pass);
pinMode(D0,OUTPUT);
}

BLYNK_WRITE(V0){
  pinvalue=param.asInt();
  }

void loop() {
 analogWrite(D0,pinvalue);
Blynk.run();
}
