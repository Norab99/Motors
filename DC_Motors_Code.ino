
void setup()
{
  pinMode(12, INPUT_PULLUP);    // ON & OFF Switch
  pinMode(11, INPUT_PULLUP);   // Change the Direction
} 

void loop()
{
  if (digitalRead(12) == 1)    // The switch is ON
  {
    if (digitalRead(11) == 1)  // counterclockwise
    {  
      digitalWrite(1, 1);
      digitalWrite(2,0);
      digitalWrite(8, 1);
      digitalWrite(7,0);
    }
    
    else {                     // clockwise
      digitalWrite(1, 0);
      digitalWrite(2,1);
      digitalWrite(8, 0);
      digitalWrite(7,1);
    }
  }
  
  else {                    // The switch is OFF
    digitalWrite(1, 0);
    digitalWrite(2,0);
    digitalWrite(8, 0);
    digitalWrite(7,0); 
  }
}
