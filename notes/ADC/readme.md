
# ADC no Arduino

O ADC, ou conversor analógico-digital, é um componente que converte sinais analógicos em sinais digitais. Sinais analógicos podem variar continuamente, enquanto sinais digitais são representados por valores discretos, como números. No caso do Arduino, o ADC é integrado ao microcontrolador e tem uma resolução de 10 bits, permitindo representar a tensão analógica de entrada com valores de 0 a 1023. Isso significa que o Arduino pode interpretar e processar sinais do mundo real, como a variação de tensão de um sensor, e convertê-los em números que podem ser utilizados em programas e projetos eletrônicos.

O ADC fica integrado no microcontrolador do Arduino. Não é um componente separado, mas sim parte do chip principal que controla toda a placa. Por exemplo, no Arduino Uno, o microcontrolador é o ATmega328P, e ele já vem com um ADC de 10 bits embutido. Assim, todos os pinos de entrada analógica na placa Arduino compartilham esse ADC para converter sinais analógicos em valores digitais. Outros componentes conectados à placa que precisam de conversão ADC utilizam esse ADC integrado ou possuem seus próprios conversores, dependendo do caso e da necessidade.

O intervalo de 0 a 1023 é definido pela resolução do conversor analógico-digital (ADC) do Arduino, que é de 10 bits.

Cada "bit" é uma unidade básica de informação que pode ser 0 ou 1. Com 10 bits, você pode representar 2^10 (2 elevado à décima potência) valores diferentes. Isso dá 1024 valores distintos, que vão de 0 a 1023.

Quando o Arduino lê uma tensão de uma entrada analógica, ele converte essa tensão em um valor digital dentro desse intervalo. O 0 representa a tensão mais baixa que o ADC pode ler (geralmente 0 volts), e 1023 representa a tensão mais alta que o ADC pode ler (geralmente 5 volts). Portanto, conforme a tensão varia entre esses extremos, o Arduino atribui a ela um valor entre 0 e 1023. Esse valor digital é proporcional à tensão medida e pode ser usado para controlar diferentes funcionalidades em um projeto eletrônico.