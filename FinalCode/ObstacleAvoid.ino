//bibliothèques utilisées //
#include <NewPing.h>
#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);
Servo ourservo;  //servo
int dis_F,dis_R,dis_L; //distances
const int buzzer = 5; //buzzer to arduino pin 5 //

#define maximum_distance 200
NewPing sonar(10, 7,maximum_distance);//sensor function Trig Echo//
void setup(){
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(buzzer, OUTPUT); 
  ourservo.attach(6);
  Serial.begin(9600);
// initialiser LCD //
  lcd.init();                 	 
  lcd.init();
  lcd.backlight();
}
void loop(){
   ourservo.write(20);
  dis_F = readPing();
  delay(100);
  Serial.println("Distance For :");
  Serial.println(dis_F);           //Afficher la distance pour le teste 
  if (dis_F <= 20){
	moveStop();
	affi();
	br();
	ourservo.write(65);
	delay(20);
	dis_L = readPing();
	delay(100);
	Serial.println("Distance Left :");
	Serial.println(dis_L);
	delay(500);
	ourservo.write(-65);
	delay(20);
	dis_R = readPing();
	delay(100);
	Serial.println("Distance Right :");
	Serial.println(dis_R);
	delay(500);
	ourservo.write(20);
	delay(20);
	if(dis_L > dis_R){
  	moveLeft();
  	delay(1600);
  	}else if(dis_L < dis_R){
      	moveRight();
      	delay(1600);
    	}else{
        	moveRight();
        	delay(1600);
      	}
  }
  else if (dis_F >20){
	moveForward();
	delay(30);
  }
 
}
//fonction de lecture de distance (retourner la distance en cm)//
int readPing(){
  delay(500);
  int cm;
  cm = sonar.ping_cm();
  if(cm==0){
  	cm = 255;
	}
  return cm;
}
//fonction d'affichage en LCD//
void affi(){
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("L'obstacle est");
  lcd.setCursor(3,1);
  lcd.print("a :");
  lcd.setCursor(9,1);
  lcd.print(dis_F);
  lcd.setCursor(12,1);
  lcd.print("cm");
  }
 
//fonction buzzer//
void br(){
  digitalWrite(buzzer,HIGH);
  delay(800);
  digitalWrite(buzzer,LOW);
  delay(500);   
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  delay(500);
  }

//fonctions de mobilisation//
////////////fonction pour faire arrêter le robot////////////////
void moveStop(){
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(8, HIGH);
}

////////////fonction pour avancer ////////////////
void moveForward(){
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  analogWrite(11, 230); //right
  analogWrite(3, 250);
}
////////////fonction pour reculer ////////////////
void moveBackward(){
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  analogWrite(11, 127);
  analogWrite(3, 127);
}
////////////fonction pour tourner à droite ////////////////
void moveRight(){
  digitalWrite(12, LOW);  
  digitalWrite(9, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);   
  analogWrite(11, 200);   
  analogWrite(3, 200);  
}
////////////fonction pour tourner à gauche ////////////////
void moveLeft(){
  digitalWrite(12, HIGH);  
  digitalWrite(9, LOW);
  digitalWrite(13, LOW);
  digitalWrite(8, LOW);   
  analogWrite(11, 200);   
  analogWrite(3, 200);
}