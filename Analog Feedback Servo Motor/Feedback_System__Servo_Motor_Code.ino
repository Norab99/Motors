// 1- Start.
// 2- Connect the Two motors to the Arduino.
// 3- Connect the internal potentiometer in the motor1 to the analog input in the Arduino.
// 4- Move motor1.
// 5- The value of the internal potentiometer in the motor1 will change according to the movement.
// 6- Read the value of the internal potentiometer.
// 7- Motor2 will move accroding to the movement of motor1.
// 8- End.

// Arduino Servo Library
#include <Servo.h>

// The potentiometer act like motor1 that we will get the reading from it.

int Feedback_Value;    // Read the value of the motor1 from the potentiometer.
int pinAttachM2 = 9;  // The pin that attached to the motor 1

Servo Motor2;

void setup()
{
  Motor2.attach(pinAttachM2);
}

void loop()
{
    Feedback_Value = analogRead(A0);
    Feedback_Value = map(Feedback_Value,0,1023,0,180);
    Motor2.write(Feedback_Value); 
}
