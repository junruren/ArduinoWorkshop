/* Blinking_LED
 * Author: Zhimin Lin
 * Date: 2017-2-12
 * 
 * Blink the LED connected to the board. Default in digital mode, 
 * codes for analog mode also included
 */

#define PIN_LED 9      //The number of the output pin
#define ANALOG_DELAY 5   //The delay between each increment and 
                        //decrement step of the lightness of the LED
#define SHORT_GAP 200  //The length of each on and off
#define LONG_GAP 400   //The length of each on and off
#define ANALOG_GAP 200 //The gap between blinks of the LED in analog mode
#define MAX_DUTY_CYCLE 255

/*
 * Set the pin mode to output
 */
void setup() {
  pinMode(PIN_LED, OUTPUT);
}

/*
 * Infinite loop. Keeps the LED blinking repeatedly.
 */
void loop() {
  digitalWrite(PIN_LED, HIGH);  //Turn the LED on
  delay(SHORT_GAP);  //Delay time can be modified with given constant or as desired
  digitalWrite(PIN_LED, LOW);   //Turn the LED off
  delay(SHORT_GAP);  //Delay time can be modified with given constant or as desired
  
  //Code for blinking in analog mode
  /*
  int dutyCycle = 0;

  while (dutyCycle <= MAX_DUTY_CYCLE){
  analogWrite(PIN_LED, dutyCycle);    //Increment the lightness of the LED
  dutyCycle++;
  delay(ANALOG_DELAY);
  }
  
  while (dutyCycle >= 0){
  analogWrite(PIN_LED, dutyCycle);    //Decrement the lightness of the LED
  dutyCycle--;
  delay(ANALOG_DELAY);
  }
  delay(ANALOG_GAP);  //Delay time can be modified with given constant or as desired
  */
}
