void setup()
{
  pinMode(10, INPUT);pinMode(12, OUTPUT);
}

void loop()
{
 int r=digitalRead(10);if(r==HIGH){digitalWrite(12,HIGH);delay(200);digitalWrite(12,LOW);delay(200);} else{digitalWrite(12,HIGH);}}