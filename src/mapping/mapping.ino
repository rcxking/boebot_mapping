/*
 * mapping.ino - Mapping code that runs on the Arduino/Boe-bot to map
 * a room.
 *
 * Bryant Pong
 * 6/21/15
 *
 * Last Updated: 6/22/15 - 10:59 PM
 */

// Header files:
#include <Servo.h>

/*
 * Pin definitions:
 *
 * Left Servo: Pin 13
 * Right Servo: Pin 12
 */
const int LEFT = 13;
const int RIGHT = 12;

const int BAUD = 115200;
 
// Servo Objects:
Servo left, right;
 
/*
 * Movement functions:
 * These functions define several movements that the boe-bot
 * can perform.
 *
 * Motor directions:
 * Left Motor: 0 = full reverse; 180 = full forward
 * Right Motor: 180 = full reverse; 0 = full forward
 * 90 = Hard stop.
 *
 * Currently Defined:
 * 1) Forward (speed is referencing left motor)
 * 2) Halt
 */
 
void forward(int spd) {
  // Attach all Servo motors:
  left.attach(LEFT);
  right.attach(RIGHT);
  left.write(spd);
  right.write(180-spd);
} // End function forward()

void reverse(int spd) {
  // Attach all Servo motors:
  left.attach(LEFT);
  right.attach(RIGHT);
  left.write(180-spd);
  right.write(spd);
} // End function reverse()

void halt() {
  left.detach();
  right.detach();
} // End function halt()
 
void setup() {
  // Initialize Serial Port:
  Serial.begin(BAUD);
}

void loop() {
 
  /*
   * Poll for Serial Commands from the Raspberry Pi:
   *
   * Protocol defined as follows:
   * 
   */
  if(Serial.available()) {
    // New command received:
    
  } // End if
}
