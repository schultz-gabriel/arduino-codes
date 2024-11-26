#define PinButton 7 // define pino digital D7
#define ledPin 8    // define pino digital D8

void setup()
{
  pinMode(PinButton, INPUT); // configura D7 como entrada digital
  pinMode(ledPin, OUTPUT);   // configura D8 como saída digital
  Serial.begin(9600);        // monitor serial - velocidade 9600 Bps
  delay(100);                // atraso de 100 milisegundos
}

void loop()
{
  if (digitalRead(PinButton) == LOW) // se botão = nível baixo
  {
    digitalWrite(ledPin, LOW);     // liga LED
    Serial.print("Acendendo Led"); // imprime no monitor serial
  }
  else // senão botão = nível alto
  {
    digitalWrite(ledPin, HIGH);     // desliga LED
    Serial.print("Desligando led"); // imprime no monitor serial
  }
  delay(100); // atraso de 100 milisegundos
}