#include<Wire.h>
#include<BH1750.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET    LED_BUILTIN
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

BH1750 lightMeter;
void setup() {
  // put your setup code here, to run once:
Wire.begin();
lightMeter.begin();
display.begin(SSD1306_SWITCHCAPVCC,0x3C);
display.clearDisplay();
display.setTextSize(1);
display.setTextColor(SSD1306_WHITE);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
float lux=lightMeter.readLightLevel();
Serial.println(lux);
display.clearDisplay();
display.setCursor(10,0);
display.print(lux);
display.print("  ");
display.display();
delay(1000);
}
