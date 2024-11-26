## Baud Rate

    O comando Serial.begin(9600) no Arduino é usado para iniciar a comunicação serial entre a placa e o computador. Ele configura a velocidade de transmissão de dados, que nesse caso é de 9600 bits por segundo (bps).

    Esse número, 9600, é conhecido como baud rate. Ele precisa ser o mesmo no Arduino e no programa que você usa para ler os dados, como o monitor serial da IDE do Arduino. Se os baud rates forem diferentes, a comunicação não será entendida corretamente, e você verá dados corrompidos ou ilegíveis na tela.

    Você pode alterar esse valor para velocidades diferentes, mas 9600 é uma configuração padrão muito usada para testes e monitoramento.

```C++
void setup()
{
    Serial.begin(9600); 
    delay(100);     
}
```

    O baud rate de 9600 é muito comum e amplamente utilizado, especialmente em projetos simples ou didáticos, porque é uma taxa padrão que funciona bem para a maioria das aplicações onde a velocidade de transmissão não precisa ser muito alta. É uma espécie de "zona segura" na comunicação serial.

    No entanto, não é uma regra fixa. Dependendo da aplicação, taxas mais altas ou mais baixas podem ser usadas. Por exemplo, dispositivos que precisam transferir grandes volumes de dados rapidamente podem usar baud rates como 115200 ou mais. Já em casos onde estabilidade é mais importante que velocidade, taxas menores como 2400 ou 4800 podem ser usadas.

    Então, 9600 é popular por ser confiável e suficiente para muitos projetos. É quase como o "idioma universal" da comunicação serial básica.