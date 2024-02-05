// C++ code
//
int red =13;
int orange =12;
int green =11;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(orange,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(orange,HIGH);
  delay(1000);
  digitalWrite(orange,LOW);
  delay(1000);
  digitalWrite(orange,HIGH);
  delay(1000);
  digitalWrite(orange,LOW);
  delay(1000);
  digitalWrite(orange,HIGH);
  delay(1000);
  digitalWrite(orange,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
             
}