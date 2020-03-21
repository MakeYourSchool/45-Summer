//This example code was originally published on the official Seeed Studio Wiki Website: http://wiki.seeedstudio.com/Grove-Buzzer/

void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
}