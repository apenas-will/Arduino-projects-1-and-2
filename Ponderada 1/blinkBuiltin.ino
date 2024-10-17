// Define variáveis globais do programa
int X = 1000; // Tempo que o led ficará aceso em milissegundos
int Y = 1000; // Tempo que o led ficará apagado em milissegundos

void setup() {
  // Define led builtin como saída
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Liga led pelo tempo definido anterioremente
  digitalWrite(LED_BUILTIN, HIGH);
  delay(X);

  // Desliga led pelo tempo definido anteriormente
  digitalWrite(LED_BUILTIN, LOW);
  delay(Y);
}