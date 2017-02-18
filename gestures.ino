#include <Servo.h>  // servo library

Servo servo;
const int SERVO_PIN = 9;

void setup() {
    servo.attach(SERVO_PIN);
}


void signalToCome() {
  int position = 0;
  for(position=0; position<90;position+=2) {
    servo.write(position);
    delay(20);
  }

  for(position=90; position>=0;position-=2) {
    servo.write(position);
    delay(20);
  } 
}

void signalToGo() {
  int position = 180;
  for(position=180; position>=0; position-=2) {
    servo.write(position);
    delay(50);
  }
  delay(1000);
}

void signalToListen() {
  int position = 180;
  for(position=0; position<180; position+=2) {
    servo.write(position);
    delay(50);
  }
  for(position=180; position>=0; position-=2) {
    servo.write(position);
    delay(50);
  }  
}

void setZero() {
  servo.write(0);
  delay(1000);
}

void loop()
{
  signalToCome();
  //setZero();
  //signalToListen();
}

