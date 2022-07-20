int Relay = PB8;
void setup()
{
  pinMode(Relay, OUTPUT);
}
void loop()
{
  digitalWrite(Relay, HIGH);   //Turn off relay
  delay(5000);
  digitalWrite(Relay, LOW);    //Turn on relay
  delay(5000);
}
