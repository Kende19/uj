#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  Serial.begin(9600);

  pinMode(2 ,OUTPUT); //SPEAKER
  pinMode(9, OUTPUT); //RED
  pinMode(10, OUTPUT); //GREEN
  pinMode(11, OUTPUT); //BLUE

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }

  display.clearDisplay();
  display.setTextSize(1); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 0);


  for (int i = 0; i < 3; i++) {
  display.clearDisplay();
  display.setCursor(10, 0);
  display.println(F("Dudas Kende"));
  display.display();      
  delay(500);
  display.clearDisplay();
  display.setCursor(10, 0);
  display.println(F("XXXXX XXXXX"));
  display.display();
  delay(500);
  }
}

void loop() {
  int sensor = analogRead(A1);
  print(String(sensor));
  
}

void print (String text) {
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println(text);
  display.display();
}
