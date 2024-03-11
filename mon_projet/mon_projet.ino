#include <Adafruit_LiquidCrystal.h>
#include <IRremote.h>

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
  if (IrReceiver.decode())
  {
    auto value = IrReceiver.decodedIRData.decodedRawData;
    switch (value)
    {
      case 4010852096:
        if (!switchLampState) 
        {
          digitalWrite(0, HIGH);
        }
        break;

      default:
        if (switchLampState)
        {
          digitalWrite(0, LOW);
        }
        break;
    }
  }

  IrReceiver.resume();
}
