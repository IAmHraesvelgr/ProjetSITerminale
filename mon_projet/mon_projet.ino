#include <Adafruit_LiquidCrystal.h>
#include <IRemote.hpp>

bool switchLampState = false;
bool circuitOn = true;

char* onText = "ON";
char* offText = "OFF";

Adafruit_LiquidCrystal lcd(0);
IRrecv irrecv(3);

void setup() 
{
  Serial.begin(9600);
  irrecv.enableIRIn();

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);

  lcd.begin(16, 2);

  if (circuitOn) 
  {
    lcd.print(onText);
  }
  
  else 
  {
    lcd.print(offText);
  }
}

void loop() 
{
  if (!switchLampState) 
  {
    digitalWrite(0, HIGH);
  }

  if (IrReceiver.decode())
  {
    auto value = IrReceiver.decodeIRData.decodeRawData;
    switch (value)
    {
      default:
        break;
    }
  }

  IrReceiver.resume();
}
