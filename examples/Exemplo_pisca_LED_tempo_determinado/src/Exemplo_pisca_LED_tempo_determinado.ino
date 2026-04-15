/* 
Autor: Lucas Donega
Programa: Exemplo 1 - Biblioteca do LED
Descrição: Exercício de teste 1 LED
Data: 15/04/2026
Versão: 1.0
*/


#include <Arduino.h>
#include "LED.h"

Led led1(42);

const uint8_t pinBotao = 0;

void setup() 
{
   led1.piscar(2, 15); // O LED irá piscar 15 vezes e depois desligará.
}

void loop() 
{
   led1.update(); // A função piscar depende da função update para que ela funcione, é ela quem faz a função piscar acontecer.
}
