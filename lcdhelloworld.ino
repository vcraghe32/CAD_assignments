#include <Wire.h>
#include <LiquidCrystal.h> 
LiquidCrystal lcd(0x27,16,2);
void setup()
{
	lcd.begin(16, 2);
	lcd.print("hello, world!");
	lcd.init();
lcd.backlight(HIGH);
}

void loop()
{
	lcd.setCursor(0, 1);
	lcd.print(millis() / 1000);
}
