// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);

   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
}

void loop()
{
  //motor 1
  digitalWrite(3, 1);
   digitalWrite(4, 0);

  //motor 2
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  
  delay(1000);
  
 //motor 1
  digitalWrite(3, 0);
   digitalWrite(4, 0);

  //motor 2
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  
    delay(1000);
  
  //motor 1
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  //motor 2
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  
  
   //motor 1
  digitalWrite(3, 0);
   digitalWrite(4, 0);

  //motor 2
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  
    delay(1000);
}

