# Ponderada 1

## Objetivos
Como objetivo desta ponderada, tem-se a elaboração de um código para placa arduino que faça com que o led interno da placa pisque em intervalos regulares definidos.

## Solução
Nesse sentido, visando cumprir com os objetivos anteriores,construiu-se o código disponível no aquivo [`blinkBuiltin.ino`](blinkBuiltin.ino), também apresentado seguir:

``` C++
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
```

O upload do _snippet_ anterior foi feito por meio da Arduino IDE, na Figura 1, pode-se observar a interface dessa IDE:


<div align='center'>
<sup>Figura 1 - Código na Arduino IDE</sup>

![IDE arduino com código](<Imagem IDE.png>)

<sup>Fonte: Material produzido pelo autor (2024)</sup>
</div>


## Resultados
Os resultados da aplicação do código anterior estão expostos no vídeo a seguir:

<video controls src="vídeo funcionamento.mp4" title="Resultado do Código"></video>