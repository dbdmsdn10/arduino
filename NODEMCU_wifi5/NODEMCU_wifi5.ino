#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";

BlynkTimer timer;
int val;

void mytimeevent(){
  Blynk.virtualWrite(V0,millis()/1000);
  Blynk.virtualWrite(V1,(float)(millis()/1000));
  Blynk.virtualWrite(V2,val);
  }

void setup() {
Blynk.begin(auth,ssid,pass);
timer.setInterval(1000L,mytimeevent);
}


void loop() {
 val=analogRead(A0);
Blynk.run();
timer.run();
}
