int IRSensor = 9; // connect ir sensor to arduino pin 2



void setup() 
{
  Serial.begin(9600);


  pinMode (IRSensor, INPUT); // sensor pin INPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    Serial.println("...");
    delay(100);
  }
  else
  {
    Serial.println("bebra");
    delay(100);
  }
  
}
