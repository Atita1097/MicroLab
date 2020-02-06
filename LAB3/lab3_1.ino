#define DATA_PIN 5
#define CLOCK_PIN 6
#define LATCH_PIN 4

int i = 0;
int data;
int map7seg[10] = {
  0b00111111,
  0b00000110,
  0b01011011,
  0b01001111,
  0b01100110,
  0b01101101,
  0b01111101,
  0b00000111,
  0b01111111,
  0b01101111
};

void setup()
{
  pinMode(DATA_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);
  pinMode(LATCH_PIN, OUTPUT);
}

void setLed(uint8_t state)
{
  for(i=0;i<8;i++)
  {
    digitalWrite(DATA_PIN,data>>(7-i)&0x01); //DATA pin เลื่อนไปทั้งหมดเลยให้ตัวสุดท้ายเป็น1
    digitalWrite(CLOCK_PIN,HIGH);
    delay(100);
    digitalWrite(CLOCK_PIN,LOW);
    delay(100);
  }
  digitalWrite(LATCH_PIN, HIGH);//output Register Clock
  delay(10);
  digitalWrite(LATCH_PIN, LOW);
  delay(10);
}

void loop() {
  for(int j=0;j<8;j++) 
  {
  setLed(map7seg[10]);
  }
}
  
