#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);

void setup() {
  lcd.begin(16 , 2);
  lcd.clear();
  lcd.print("Kende");
  lcd.setCursor(7,1);
  lcd.print("Boss");
  
}

void loop() 
{

}
