# Leitura de valor de potenciômetros

Basicamente, esse código mostra o valor que um poteciômetro (por exemplo, um botão de volume de um rádio) está mandando para a máquina. O valor aumenta e diminui conforme giramos o botão do potenciômetro.

O potenciômetro atua como um divisor de tensão, fornecendo ao pino analógico do Arduino uma tensão variável entre 0V e 5V, dependendo da posição de seu eixo. O ADC do Arduino lê essa tensão e a converte em um valor digital entre 0 e 1023. Assim, ao girar o potenciômetro, a resistência interna muda, alterando a tensão enviada ao pino analógico. O Arduino utiliza o valor digital gerado pelo ADC para realizar ações no código, como controlar o brilho de um LED ou a velocidade de um motor, com base na posição do potenciômetro.