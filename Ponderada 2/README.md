# Ponderada 1

## Objetivos
Como objetivo desta ponderada, tem-se a elaboração de um código para placa arduino que faça com que um led externo à placa pisque em algum intervalo definido.

## Solução
Nesse sentido, visando cumprir com os objetivos anteriores,construiu-se o código disponível no aquivo [`blinkOffBoard.ino`](blinkOffBoard.ino), também apresentado seguir:

``` C++
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
```

O upload do _snippet_ anterior foi feito por meio da Arduino IDE, na Figura 1, pode-se observar a interface dessa IDE:


<div align='center'>
<sup>Figura 1 - Código na Arduino IDE</sup>

![IDE arduino com código](<Image IDE.png>)

<sup>Fonte: Material produzido pelo autor (2024)</sup>
</div>

Antes da montagem do circuito na placa arduino, entretanto, construiu-se uma simulação, no serviço [Tinkercad](https://www.tinkercad.com/), para averiguar seu funcionamento e testar a eficácia do código. Tal prática é muito utilizada no contexto de desenvolvimento de soluções em IoT, visto que permite uma visão geral do sistema antes de sua implementação, evitando retrabalhos, falhas de funcionamento e potências perdas de material derivada de problemas na montagem. Sendo assim, na Figura 2, pode-se observar o circuito usado no código acima:

<div align='center'>
<sup>Figura 2 - Circuito da solução no Tinkercad</sup>

![Simulação do circuito no Tinkercad](<circuito.png>)

<sup>Fonte: Material produzido pelo autor (2024)</sup>
</div>

O circuito exposto acima pode ser acessado via link do Tinkercad: [`Ponderada 2`](https://www.tinkercad.com/things/6QBWpM5uMnc-ponderada-2?sharecode=zTKfzfi2ezV4qErBFX5Mhk29lHx5flUKGIE6EnSBrT4).

## Resultados
Os resultados da aplicação do código anterior estão expostos no [`vídeo funcionamento 2.mp4`](./vídeo%20funcionamento%202.mp4), no qual o circuito simulado foi montado fisicamente e o código aplicado.