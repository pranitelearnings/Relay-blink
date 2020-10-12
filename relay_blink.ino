//pranitelearnings//
//relay blink//
int relay = 2;// digital pin 2 //

void setup() 
{
  pinMode(relay,OUTPUT);// relay as output//
}

void loop() 
{
  digitalWrite(relay,HIGH);//relay on for 1 sec//
  delay(1000);//wait for 1 sec//
  digitalWrite(relay,LOW);//relay off for 1 sec//
  delay(1000);//wait for 1sec
}
