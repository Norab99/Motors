
#include <Stepper.h>

/* The angle for 4 steps sequence for 28-BYJ48 stepper motor is 11.25 degree 
since it is 5.625°(given in datasheet) for 8 step sequence it from datasheet, 
so the steps per revolution = 360/(5.625*2) = 32. To make one complete rotation
we need to move 2048 = 32*64=2048 as we have 32 steps and 64 as the gear ratio. */

#define stepPerRevolution 32  

Stepper StepperMotor(stepPerRevolution, 8, 10, 9, 11);

void setup() {
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  StepperMotor.setSpeed(200);        // The range of speed for for 28-BYJ48 stepper motor is from 0 to 200 rpm.
}

void loop() {  
  if (digitalRead(3) == 0) { 
    StepperMotor.step(stepPerRevolution);         // The motor will move counterclockwise 
  }

 else if (digitalRead(4) == 0) {
    StepperMotor.step(-stepPerRevolution);      // The motor will move clockwise 
  }
}
