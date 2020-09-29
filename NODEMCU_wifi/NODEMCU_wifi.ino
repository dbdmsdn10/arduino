#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";

void setup() {
  // put your setup code here, to run once:
Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
}
