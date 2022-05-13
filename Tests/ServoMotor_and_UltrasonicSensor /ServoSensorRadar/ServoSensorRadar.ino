#include <NewPing.h> 
#include <Servo.h>
//servo 
Servo ourservo;
int pos = 0; 
//sensor
NewPing sonar(10, 7, 30);

void setup() {
    myservo.attach(8);
    Serial.begin(9600);                  //Serial monitor for test 
}

void loop() {
  dis_F = readPing();
  delay(50);                             // delay 50ms to read distance
  for (pos = 0; pos <= 180; pos += 10) { // goes from 0 degrees to 180 degrees 10 degrees angle as steps
    myservo.write(pos);                  // move the servo by the angle = pos
    distance = readPing();
    Serial.println(distance);
    delay(100);                          // waits 100ms for the servo to reach the position
  }
  
  for (pos = 180; pos >= 0; pos -= 10) { // goes from 0 degrees to 180 degrees 10 degrees angle as steps
    myservo.write(pos);                 // tell servo to go to position in variable 'pos'
    distance = readPing();
    Serial.println(distance);
    delay(100);                         // waits 15ms for the servo to reach the position
  }                                     // waits 15ms for the servo to reach the position
 }
int readPing(){                         //Function to read distance 
  return sonar.ping_cm();;
}