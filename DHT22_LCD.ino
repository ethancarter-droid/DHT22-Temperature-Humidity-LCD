#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define DHTTYPE DHT22
#define DHTPIN 3

LiquidCrystal_I2C lcd(0x27, 16, 2);

DHT dht(DHTPIN, DHTTYPE);

void setup()
{ 
  lcd.init();
  lcd.backlight();
  dht.begin();
}
void loop()
{ 
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" (C)");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");

  delay(2080);
}
