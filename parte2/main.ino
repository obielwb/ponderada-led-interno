const int ledPin = 13;
int intervalo = 100;  // Começa piscando rápido
int incremento = 100; // Mudança de tempo por ciclo

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(intervalo);
  digitalWrite(ledPin, LOW);
  delay(intervalo);

  // Aumenta a cadência até um limite e depois volta
  intervalo += incremento;
  if (intervalo > 1000 || intervalo < 100)
  {
    incremento = -incremento;
  }
}
