void setup()
{
  DDRD = 0b11111100;
  DDRB = 0b000011;
}

void loop()
{
  PORTB = 0b000010;
  delay(500);
  for(int i=0; i<2; i++)
  {

  PORTB = PORTB >> 1;
  delay(500);

  }
  
  PORTD = 0b10000000;
  delay(500);
  
   for(int i=0; i<8; i++)
  {

  PORTD = PORTD >> 1;
  delay(500);
   }
}
