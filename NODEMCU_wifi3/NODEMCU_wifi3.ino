#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";

WidgetLED led1(V0);

void setup() {
  // put your setup code here, to run once:
Blynk.begin(auth,ssid,pass);
pinMode(D2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(D2);
  if(val) led1.on();
  else led1.off();
Blynk.run();
}
