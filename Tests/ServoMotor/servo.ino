#include <Servo.h>

Servo myservo;                          // create servo object to control a servo
                                        // twelve servo objects can be created on most boards

int pos = 0;                            // variable to store the servo position

void setup() {
  myservo.attach(8);                    // attaches the servo on pin 8 to the servo object
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);                 // tell servo to go to position in variable 'pos'
    delay(15);                          // waits 15ms for the servo to reach the position 1 angle
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);                 // tell servo to go to position in variable 'pos'
    delay(15);                          // waits 15ms for the servo to reach the position
  }
}
// You can change the step from pos += 1 to pos =+ 20 to reach the position by 20degrees angle
// You can also change the delay so the servom motor take less time to move angles delay(5) or delay(0)