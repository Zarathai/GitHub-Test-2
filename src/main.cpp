#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define name "Griffin"

LiquidCrystal_I2C lcd(0x27, 20, 4);
int i = 0;
int n = 0;

void setup() {
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
}


void loop() {
  lcd.setCursor(i,i);
  lcd.print(name);
  lcd.print(i+1);
  delay(500);
  i += 1;
  if (i == 4) {
    i = 0;
    n += 1;
    lcd.clear();
    lcd.setCursor(i,i);
    lcd.print(n);
    delay(1000);
  }
}