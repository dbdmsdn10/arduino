#include "DHTesp.h"
#ifdef ESP
#pragma message(THIS EXAMPLE IS FOR ESP8266 ONLY!)
#error Select ESP8266 board.
#endif
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[]="sfdDM7p8Hz8Adq-fcx5iosCn4vcYe6wn";
char ssid[]="icee705-2g-2";
char pass[]="icee2675";
DHTesp dht;

void setup() {
Serial.begin(115200);
Serial.println();
dht.setup(2,DHTesp::DHT11);
Blynk.begin(auth,ssid,pass);
}

void loop() {
delay(2000);
float humidity=dht.getHumidity();
float tmp=dht.getTemperature();


Serial.print(dht.getStatusString());
Serial.print("\t");
Serial.print(humidity,1);
Serial.print("\t\t");
Serial.print(tmp,1);
Serial.print("\t\t");
Serial.print(dht.toFahrenheit(tmp),1);
Serial.print("\t\t");

Serial.print(dht.computeHeatIndex(tmp,humidity,false),1);
Serial.print("\t\t");
Serial.println(dht.computeHeatIndex(dht.toFahrenheit(tmp),humidity,true),1);

Blynk.virtualWrite(V0,humidity);
Blynk.virtualWrite(V1,tmp);
Blynk.run();
}
