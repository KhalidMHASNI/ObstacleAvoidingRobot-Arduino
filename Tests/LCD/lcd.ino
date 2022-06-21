#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup(){
// initialiser LCD //
  lcd.init();                 	 
  lcd.init();
  lcd.backlight();
}
void loop(){
  lcd.clear();                  //clear lcd
  lcd.setCursor(1,0);
  lcd.print("Hello ");  // line 0 case 1 : Hello
  lcd.setCursor(3,1);
  lcd.print("World");   // line 1 case 3 : World
}