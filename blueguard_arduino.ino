#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13;

long duration;
float distance;
unsigned long startTime = 0;
unsigned long endTime = 0;
bool carPassed = false;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Lap Time:");
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.034) / 2;

  if (distance < 20 && !carPassed) {
    carPassed = true;
    startTime = millis();
    digitalWrite(ledPin, HIGH);  // Liga LED quando o carro passa
  }

  if (carPassed && distance > 20) {
    carPassed = false;
    endTime = millis();
    unsigned long lapTime = endTime - startTime;
    Serial.print("Lap time: ");
    Serial.print(lapTime / 1000.0);
    Serial.println(" seconds");

    lcd.setCursor(0, 1);
    lcd.print(lapTime / 1000.0);
    lcd.print(" sec    ");
    
    digitalWrite(ledPin, LOW);  // Desliga LED
  }

  delay(100);
}
