// This program is using motor shield
void setup() {
  
  pinMode(12, OUTPUT);      //Initiates Motor Channel A pin
  pinMode(9, OUTPUT);       //Initiates Brake Channel A pin
  pinMode(13,OUTPUT);       //Initiates Motor Channel B pin
  pinMode(8,OUTPUT);        //Initiates Brake Channel B pin
}
void loop(){ 
    // Forward
  digitalWrite(12, HIGH);   //Set the direction of the motor A to Forward
  digitalWrite(9, LOW);     //Brake's off
  digitalWrite(13, HIGH);   //Set the direction of the motor B to Forward
  digitalWrite(8, LOW);     //Brake's off
  analogWrite(11, 127);     //Set speed of the Motor A to 127
  analogWrite(3, 127);      //Set speed of the Motor B to 127
 
  delay(1500);
  
    //Backwards
  digitalWrite(12, LOW);    //Set the direction of the motor A to backwards
  digitalWrite(9, LOW);     //Brakes's off
  digitalWrite(13, LOW);    //Set the direction of the motor B to Forward
  digitalWrite(8, LOW);     //Brake's off
  analogWrite(11, 127);     //Set speed of the Motor A to 127
  analogWrite(3, 127);      //Set speed of the Motor B to 127
  
  
  delay(1500);


    //Left
  digitalWrite(12, HIGH);   //Set the direction of the motor A to Forward
  digitalWrite(9, LOW);     //Brake's off
  digitalWrite(13, LOW);    //Set the direction of the motor B to backwards
  digitalWrite(8, LOW);     //Brake's off
  analogWrite(11, 127);   
  analogWrite(3, 127);
  delay(1500);

    //Right 
  digitalWrite(12, LOW);    //Set the direction of the motor A to backwards
  digitalWrite(9, LOW);     //brake's off
  digitalWrite(13, HIGH);   //Set the direction of the motor B to Forward
  digitalWrite(8, LOW);     //brake's off
  analogWrite(11, 127);   
  analogWrite(3, 127);
  delay(1500);

    //Stop
  digitalWrite(12, LOW);  
  digitalWrite(9, HIGH);    //brake's ON
  digitalWrite(13, LOW); 
  digitalWrite(8, HIGH);    //brake's ON
  delay(3000);
}