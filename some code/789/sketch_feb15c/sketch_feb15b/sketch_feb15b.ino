int led = 13;

void setup() {
  // put your setup code here, to run once:
   pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(led,HIGH);

  int out = 0;
  int persent;
  int pwm;
  int a=0;
  while(1)
  { 
   persent ++;
   if (persent >= 1000)
   {
     persent = 0;
   }
    
    for(pwm  = 0; pwm < 1000; pwm ++)
    {
      if(pwm > persent)
      {
        //out =0;
        digitalWrite(led,LOW);
      }
      else
      {
        //out = 1;
        digitalWrite(led,HIGH);
      }
    }
  }
}


