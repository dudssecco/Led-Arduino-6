// C++ code
//
int Tempo = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

  Tempo = 1000;
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(Tempo); // Wait for Tempo millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
}
