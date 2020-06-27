#define POM 6       // The output pin that attached to the transistor.
#define PIS 10    // The input pin that takes the read from the switch to reverse the direction.

void setup()
{
  pinMode(POM, OUTPUT);
  pinMode(PIS, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(PIS)==1){   // The direction of the motor will be forward
    digitalWrite(POM, 1);
  }
  
  if (digitalRead(PIS)==0){   // The direction of the motor will be backward
    digitalWrite(POM,0);
  }
}
