void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
    int out = 0;
  int persent;
  int pwm;
  int a=0;
  
  while(1)
  {
    persent ++;
    if (persent >= 100)
    {
      persent = 0;
    }

    for(pwm = 0; pwm < 100; pwm ++)
    {
      if(pwm < persent)
      {
        out  = 0;
      }
      else
      {
        out = 1;
      }
    }
  }
  return 0;
}
