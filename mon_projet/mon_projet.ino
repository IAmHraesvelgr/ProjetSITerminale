#include <Adafruit_LiquidCrystal.h>

char* onText = "ON";

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  
  lcd.begin(16, 2);
  lcd.print(onText);
}

void loop() 
{
  if (digitalRead(2) == HIGH)
  {
    digitalWrite(3, HIGH);
  }
  else
  {
    digitalWrite(3, LOW);
  }
}
