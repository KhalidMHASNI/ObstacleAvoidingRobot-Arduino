#include <NewPing.h>                    // A library that facilitates working with ultrasonic sensors.
#define max_distance = 70
NewPing sonar(7, 11, max_distance);     // Pin 7 For TRIGGER , Pin 11 For ECHO
void setup() {
    Serial.begin(9600);                 // Open serial monitor at 9600 baud to see ping results
    delay(500);                         // Delay 500ms (changeable)
}

void loop() {
    Serial.print("the distance is:");   // Print in the Serial Monitor
    Serial.println(sonar.ping_cm());    //Print the value of the distance bettween the sensor and the object
    delay(700);                         //Delay 700ms (changeable)
} 