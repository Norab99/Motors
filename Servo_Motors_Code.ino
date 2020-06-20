
#include <Servo.h>

// There are two potentiometers as they act like joystick that have two cordinates which are x,y

int x_cor;    // Variable to read the value of the x cordinate (Horizontal - First Potentiometer)
int y_cor;    // Variable to read the value of the y cordinate (Vertical - Second Potentiometer)
int pinAttachM1 = 7;
int pinAttachM2 = 9;

Servo Motor1;
Servo Motor2;

void setup()
{
  Motor1.attach(pinAttachM1);
  Motor2.attach(pinAttachM2);
}

void loop()
{
    x_cor = analogRead(A0);
    y_cor = analogRead(A1); 
    x_cor=map(x_cor,0,1023,0,180);
    y_cor=map(y_cor,0,1023,0,180);
    Motor1.write(x_cor);
    Motor2.write(y_cor); 
}
