 int i=0;
void setup()
{
 
  for(i=0;i<3;i++)
  {
    pinMode(1, OUTPUT);
  }
  
  
}


void loop()
{
  for(i=0;i<3;i++) 
  {
    digitalWrite(1, HIGH);
    delay(500); // Wait for 1000 millisecond(s)
    digitalWrite(1, LOW);
    delay(500); // Wait for 1000 millisecond(s)
  }

}