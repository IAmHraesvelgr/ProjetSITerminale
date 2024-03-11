#include <LiquidCrystal.h>

bool switchLampState = false;
bool circuitOn = true;

char* onText = "ON";
char* offText = "OFF";

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() 
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);

  lcd.begin(16, 2);

  if (circuitOn) 
  {
    lcd.setCursor(0, 0);
    lcd.print(onText);
  }
  
  else 
  {
    lcd.setCursor(0, 0);
    lcd.print(offText);
  }
}

void loop() 
{
  if (!switchLampState) 
  {
    digitalWrite(0, HIGH);
  }
}
