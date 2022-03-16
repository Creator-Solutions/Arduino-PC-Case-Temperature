#include <LiquidCrystal.h>
#include <Wire.h> 
                                  

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int sensorPin = 0;
int tempC;

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  int value = analogRead(sensorPin);
  lcd.setCursor(0, 1);
  float millivolts = (value / 1024.0) * 5000;
  float celcuis = millivolts / 10;
  lcd.clear();
  lcd.print("Set Temp: ");lcd.print(celcuis);
  lcd.print("C");
  delay(3000); 
}
