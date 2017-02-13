/*
 * Flowing LEDs
 * Author: Zhimin Lin
 * Date: 2017-02-13
 * 
 * Turn LEDs connected to the board on and off consecutively. LEDs are turned on one by one,
 * and then turned off one by one in the reversed direction.
 */
 
#define LOW_PIN 2
#define HIGH_PIN 9
#define DELAY 100


void setup() {
  int pin = LOW_PIN;
  while (pin <= 9){
    pinMode(pin, OUTPUT);
    pin++;
  }
}

void loop() {
  int curPin = LOW_PIN;
  while (curPin <= HIGH_PIN){
    digitalWrite(curPin, HIGH);
    curPin++;
    delay(DELAY);
  }
  delay(DELAY);

  curPin = HIGH_PIN;
  while(curPin >= LOW_PIN){
    digitalWrite(curPin, LOW);
    curPin--;
    delay(DELAY);
  }
  delay(DELAY);

  curPin = HIGH_PIN;
  while(curPin >= LOW_PIN){
    digitalWrite(curPin, HIGH);
    curPin--;
    delay(DELAY);
  }
  delay(DELAY);

  curPin = LOW_PIN;
  while (curPin <= HIGH_PIN){
    digitalWrite(curPin, LOW);
    curPin++;
    delay(DELAY);
  }
  delay(DELAY);
}
