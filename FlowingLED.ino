/*
 * Flowing LEDs
 * Author: Zhimin Lin
 * Date: 2017-02-14
 * 
 * Turn LEDs connected to the board on and off consecutively. LEDs are turned on one by one,
 * and then turned off one by one in the reversed direction.
 */
 
#define LOW_PIN 2   //The lowest pin used to connect a LED
#define HIGH_PIN 9  //The highest pin used to connect a LED
#define DELAY 100   //Delay time between actions of LEDs

/*
 * Set pin 2 to 9 as Output
 */
void setup() {
  int pin = LOW_PIN;
  while (pin <= 9){
    pinMode(pin, OUTPUT);
    pin++;
  }
}

/*
 * Keep Turning LEDs on and off one by one. First turn LEDs on from lower pin to higer pin,
 * and then turn off in reversed direction. Then turn LEDs on from higher pin to lower pin, 
 * and then turn off in reversed direction.
 */
void loop() {
  int curPin = LOW_PIN;
  while (curPin <= HIGH_PIN){    //Turn LEDs on one by one from lower pin to higher pin
    digitalWrite(curPin, HIGH);  //Turn the LED connected to current pin on
    curPin++;                    //Move to the next pin
    delay(DELAY);                //Delay between the action of two pins
  }
  delay(DELAY);                  //Delay after all LEDs are turned on

  curPin = HIGH_PIN;
  while(curPin >= LOW_PIN){     //Turn LEDs off one by one from higher pin to lower pin
    digitalWrite(curPin, LOW);  //Turn the LED connected to current pin off
    curPin--;                   //Move to the next pin
    delay(DELAY);               
  }
  delay(DELAY);                 //Delay after all LEDs are turned off

  curPin = HIGH_PIN;
  while(curPin >= LOW_PIN){     //Change the direction in which LEDs are turned on. 
                                  //Turn LEDs on one by one from higher pin to lower pin
    digitalWrite(curPin, HIGH);
    curPin--;
    delay(DELAY);
  }
  delay(DELAY);                 //Delay after all LEDs are turned on

  curPin = LOW_PIN;
  while (curPin <= HIGH_PIN){   //Change the direction in which LEDs are turned off. 
                                  //Turn LEDs off one by one from lower pin to higher pin
    digitalWrite(curPin, LOW);
    curPin++;
    delay(DELAY);
  }
  delay(DELAY);                 //Delay after all LEDs are turned on
}
