#include <Servo.h>
#include <NewPing.h>

Servo myservo;                      //create servo object to control a servo
NewPing sonar(10, 9, 30);
int dis_F,dis_R,dis_L;

void setup() {
  myservo.attach(6);                // attaches the servo on pin 6 to the servo object
  Serial.begin(9600);
}

void loop() {
  ourservo.write(20);               //Initialise the servo motor
  dis_F = readPing();
  delay(100);
  Serial.println("Distance For :");
  Serial.println(dis_F);           // Show distance FORWARD in Serial Monitor (test)
    if (dis_F <= 20){
        //Turning the servo to the LEFT
        ourservo.write(65);
        delay(20);
        dis_L = readPing();
        delay(100);
        Serial.println("Distance Left :");
        Serial.println(dis_L);
        delay(500);

        //Turning the servo to the RIGHT
        ourservo.write(-65);
        delay(20);
        dis_R = readPing();
        delay(100);
        Serial.println("Distance Right :");
        Serial.println(dis_R);
        delay(500);

        //Turning the servo to his initial position
        ourservo.write(20);
        delay(20);    
      
  } 
}
int readPing(){
  Serial.println("test");
  int cm;
  cm = sonar.ping_cm();
  if(cm==0){
      cm = 0;
    }
  return cm;
}