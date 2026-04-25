#include <Wire.h> 
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C 
lcd(0x27, 16, 2); 
void setup(){ 
  lcd.init(); 
  lcd.backlight(); 
} 
void loop(){
  int input = analogRead(A0); 
  float Vcalculation = (5.0 / 1023.0) * input; 
  lcd.setCursor(0, 0); 
  lcd.print("Batt "); 
  lcd.print(Vcalculation); 
  delay(500); 
  }
