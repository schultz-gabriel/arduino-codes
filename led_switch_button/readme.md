# Projeto: Controle de LED com Push-Button em Arduino

Este projeto utiliza um Arduino Mega 2560 para controlar um LED com um push-button. Ao pressionar o botão, o LED muda de estado (liga ou desliga) de acordo com a lógica estabelecida. Esse projeto exemplifica o uso de entradas e saídas digitais e apresenta uma configuração "active-low" para o LED.

## Funcionamento do Código

O código controla o LED da seguinte maneira:
1. Define o botão (push-button) no pino 7 e o LED no pino 8.
2. Configura o botão como uma entrada digital com um resistor de pull-up interno, o que mantém o estado do pino em "HIGH" (alto) quando o botão não está pressionado. Ao pressionar o botão, o pino é conectado ao GND, passando para "LOW" (baixo).
3. Configura o LED como uma saída digital.

No loop principal (`loop()`), o código lê o estado do botão:
- Se o botão está pressionado (`LOW`), o código define o LED como `LOW`, acendendo-o.
- Se o botão está solto (`HIGH`), o código define o LED como `HIGH`, apagando-o.

O código utiliza uma breve pausa de 100 milissegundos para evitar leituras rápidas demais e também imprime o estado atual do LED no Monitor Serial.

## Conexão "Active-Low" do LED

Este projeto usa uma configuração chamada **"active-low"** para o LED. Em uma conexão "active-low":
- O LED é conectado entre o pino digital e o VCC (pino positivo).
- O LED acende quando o pino está em estado `LOW` (baixo) e apaga quando o pino está em `HIGH` (alto).

A razão para esse comportamento é que, em `LOW`, a corrente flui do pino do Arduino para o LED, completando o circuito e acendendo-o. Quando o pino está em `HIGH`, o pino e o VCC têm a mesma tensão, impedindo a passagem de corrente, o que mantém o LED apagado.

### Vantagens do Active-Low

Esse tipo de conexão é comumente usado para simplificar o controle e preservar energia em circuitos digitais, além de facilitar a fiação em alguns casos. No entanto, exige uma inversão da lógica no código, onde `LOW` significa "ligado" e `HIGH` significa "desligado".

## Exemplo de Uso

Após carregar o código no Arduino, observe o comportamento do LED ao pressionar e soltar o botão. Você deve ver o LED acender quando o botão é pressionado e apagar quando o botão é solto, devido à configuração "active-low".


## Licença

Este projeto é de código aberto e está disponível para uso, estudo e modificação conforme desejado.
