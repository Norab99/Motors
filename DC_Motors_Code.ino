#define Sw1 11  // ON & OFF Switch
#define Sw2 12  // Change the Direction

#define OM11 1  // input1 that attecned to motor1
#define OM12 2  // input2 that attecned to motor1
#define OM21 8  // input1 that attecned to motor2
#define OM22 7  // input2 that attecned to motor2

void setup()
{
  pinMode(Sw2, INPUT_PULLUP); 
  pinMode(Sw1, INPUT_PULLUP);  
}

void loop()
{
  if (digitalRead(Sw2) == 1) // The switch is ON
  {
    if (digitalRead(Sw1) == 1) {  // counterclockwise
  		digitalWrite(OM11, 1);
  		digitalWrite(OM12,0);
  		digitalWrite(OM21, 1);
  		digitalWrite(OM22,0);
    }
    
    else {                   // clockwise
  		digitalWrite(OM11, 0);
  		digitalWrite(OM12,1);
  		digitalWrite(OM21, 0);
  		digitalWrite(OM22,1);
    }
  }
  
  else {                // The switch is off
    digitalWrite(OM11, 0);
  	digitalWrite(OM12,0);
  	digitalWrite(OM21, 0);
  	digitalWrite(OM22,0); 
  }
}
