/* 
Autor: Lucas Donega
Programa: Exemplo 5 - Biblioteca LED
Descrição: Exemplo 5 de como funciona as funções da biblioteca LED
Data: 15/04/2026
Versão: 1.0
*/

#include <Arduino.h>
#include "LED.h"

Led Led1(45);
Led Led2(42);
Led Led3(40);

const uint8_t pinBotao = 0;

void setup() 
{
Led1.ligar(); //Liga o LED 1.
Led2.piscar(); // Pisca o LED 2.
Led3.desligar(); // Desliga o LED 3.
}

void loop() 
{
  Led1.update();
  Led2.update();
  Led3.update();
}
