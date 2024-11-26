# Monitoramento de Luminosidade com Sensor LDR e Arduino

Este projeto utiliza um sensor LDR (Light Dependent Resistor) em um divisor de tensão conectado ao pino analógico A0 de um Arduino para medir a intensidade de luz ambiente. Quando a luz incide no sensor, a resistência do LDR diminui, resultando em uma variação de tensão que é capturada pelo Arduino. Essa leitura é convertida em uma tensão, permitindo monitorar as mudanças de luminosidade.

## Funcionamento do Código

O código define um valor de limiar de tensão, e, se a leitura do sensor ultrapassar esse valor, um LED conectado ao pino digital 8 é acionado para indicar que a intensidade de luz superou o limite pré-estabelecido. Caso contrário, o LED é desligado. A ideia é que o LED funcione como um indicador visual das variações de luz no ambiente, ajustável pelo valor do limiar de acordo com a necessidade.

Por meio do monitor serial, é possível acompanhar a leitura da tensão no sensor e ajustar o código para diferentes condições de luminosidade.

## Aplicação

Este sistema oferece um exemplo de controle baseado em sensores e é aplicável em projetos de automação e monitoramento ambiental.
