# Biblioteca Led

Biblioteca para Arduino criada para simplificar o controle de LEDs em projetos.

Ela reúne em uma única classe funções comuns como ligar, desligar, alternar estado e fazer o LED piscar, além de permitir o uso de repetições e frequências de piscada.

O objetivo é deixar o código simples, organizado e fácil de usar, evitando o uso repetitivo de comandos como `digitalWrite()` e controle manual de tempo com `millis()`.

A biblioteca pode ser utilizada em qualquer projeto que precise controlar um ou mais LEDs de forma simples.

## Características

* Ligar e desligar LEDs
* Alternar automaticamente entre ligado e desligado
* Fazer o LED piscar
* Configurar quantidade de repetições
* Configurar frequência da piscada
* Controle individual de vários LEDs ao mesmo tempo

## Organização

A estrutura da biblioteca foi pensada para ser simples mesmo em projetos maiores, permitindo controlar cada LED de forma independente através de objetos diferentes.

Isso deixa o código mais limpo, fácil de entender e de manter.

## Exemplo de uso

```cpp
Led led1(13);
Led led2(12);

void setup()
{
    led1.ligar();
    led2.desligar();
}

void loop()
{
    led1.piscar();
}
```

## Aplicações

A biblioteca pode ser usada em:

* Sinalização com LEDs
* Indicadores de status
* Menus e interfaces com Arduino
* Sistemas de alerta
* Projetos com múltiplos LEDs
* Testes e protótipos

Desenvolvida para deixar o uso de LEDs mais simples, organizado e reutilizável.
