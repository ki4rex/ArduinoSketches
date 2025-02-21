/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

  NOTE 1 from https://the-daily-dabble.com/morse-code-light/
  The three Morse code spacing rules:

  The time gap between dots and dashes is 1 unit of time—or the same length as one dot. // 100 
  The time gap between full letters is 3 units of time—or the same length as one dash.  // 300
  The pause between complete words is 7 units of time.                                  // 700
  
  This is KI4REX's expansion on this example sketch to blink the 8th PIN as an LED pin 
  and signal "This is" AKA "DE" his ham radio callsign "KI4REX" with proper spacing
  Ryan Russell - ЯR - KI4REX

*/
// Setting the LED PIN to pin 8
int LEDPIN = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LEDPIN, OUTPUT);
}
/*
  K = dah dit dah
  I = dit dit
  4 = dit dit dit dit dah
  R = dit dah dit
  E = dit
  X = dah dit dit dah

  // Dit 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second

  // dah
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second


*/

// the loop function runs over and over again forever
void loop() {
  
  // D = dah dit dit
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);  
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300);
  
  // E = dit
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
  // Space between words = 700 off
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(700);                      // wait for a second
  
  // K = dah dit dah
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300); 
  // I = dit dit
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300); 

  // 4 = dit dit dit dit dah
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300);

  // R = dit dah dit
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300); 

  // E = dit
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300);

  // X = dah dit dit dah
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100);
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(100); 
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(300);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(300);

  // Space between words = 700 off
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(700);                      // wait for a second

/* Previous example code to be deleted later
  digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
*/
}
















