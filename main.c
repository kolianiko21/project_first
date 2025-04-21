void Delay(unsigned long x){
 unsigned long i;
 for (i = 0; i < x; i++);
}

void main(void){
 signed char i;
 IOPORT1 = 0x00;
 Delay(1000);
  while (1){
    for (i = 0; i < 8; i=i+1)
    {
     IOPORT1 = ~(0x03<<i);
      Delay(30000);
    }
    for (i = 7; i >= 0; i=i-1)
    {
      IOPORT1 = ~(0x03<<i);
      Delay(30000);
    }
  }
}

