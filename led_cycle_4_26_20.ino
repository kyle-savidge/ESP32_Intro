#include "Arduino.h"
// Global(s)
int counter = 1;

// The setup function is called once at startup of the sketch
void setup()
{
	pinMode(26, OUTPUT);    // sets the digital pin 26 as output
	Serial.begin(9600);	// open the serial port at 9600 bps
	delay(500);		// wait half a second before looping
}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(26, HIGH); // sets the digital pin 26 (LED) on/HIGH
	delay(1000);            // waits for a second
	digitalWrite(26, LOW);  // sets the digital pin 26 off/LOW
	delay(3000);            // waits for 3 seconds

	// Print to serial monitor console and increment
	String counter_str = String(counter);
	Serial.print("Cycle #" + counter_str);
	counter = counter + 1;
}
