unsigned int a=0b000000001;
void setup()
{
  DDRD = 0b11111111;
  DDRB = 0b00000011;
}
void loop()
{
  int d =analogRead(A0);
  PORTD = a;
  delay(d);
  if (PINB==0b00000001&&a!=0b10000000)
  a=a<<1;
  if (PINB==0b00000010&&a!=0b00000001)
  a=a>>1;
}unsigned int a=0b000000001;

void setup()
{
  DDRD = 0b11111111;
  DDRB = 0b00000011;
}
void loop()
{
  int d =analogRead(A0);
  PORTD = a;
  delay(d);
  if (PINB==0b00000001&&a!=0b10000000)
  a=a<<1;
  if (PINB==0b00000010&&a!=0b00000001)
  a=a>>1;
}
