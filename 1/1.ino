#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  lcd.begin(20,2);
  lcd.print("06050421");
  lcd.print("john");
}
void loop()
{
  
}
