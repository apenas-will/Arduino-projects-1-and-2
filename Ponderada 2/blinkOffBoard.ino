// Define saídas do código
void setup()
{
  pinMode(12,OUTPUT); // Led azul
  pinMode(13,OUTPUT); // Led vermelho
}

// Define função de piscar o led
void blink(int led, int interval)
{
  digitalWrite(led, HIGH); // Liga o led
  delay(interval); // Espera por 1000 milissegundos
  digitalWrite(led, LOW); // Desliga o led
}

// Loop principal
void loop()
{
  blink(12, 1000); // Faz o led azul piscar
  blink(13, 1000); // Faz o led vermelho piscar
}