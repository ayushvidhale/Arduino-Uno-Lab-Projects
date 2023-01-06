#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,8,9,10,11);

//const int rs = 6;
//const int en = 7;
//const int data_4 = 8;
//const int data_5 = 9;
//const int data_6 = 10;
//const int data_7 = 11;

void setup() 
{
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() 
{
  lcd.print(" Hello World!!");
  lcd.setCursor(0,0);
}
