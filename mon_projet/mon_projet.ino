#include <Adafruit_LiquidCrystal.h>

#define ONTEXT "ON "
#define OFFTEXT "OFF"

Adafruit_LiquidCrystal lcd(0);

void printOn()
{
  digitalWrite(3, HIGH);
  lcd.setCursor(0, 0);
  lcd.print(ONTEXT);
}

void printOff()
{
  digitalWrite(3, LOW);
  lcd.setCursor(0, 0);
  lcd.print(OFFTEXT);
}

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
  
  lcd.begin(16, 2);
}

void loop() 
{
  if (digitalRead(2) == HIGH)
	  printOn();
  else
	  printOff();
}
