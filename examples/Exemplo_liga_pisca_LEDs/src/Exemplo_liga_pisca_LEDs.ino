/* 
Autor: Lucas Donega
Programa: Exemplo 3 - Biblioteca LED
Descrição: Exercicio 3 da Biblioteca LED
Data: 15/04/2026
Versão: 1.0
*/

#include "LED.h"
#include <Arduino.h>

//Instâncias
Led led1(42);
Led led2(45);

const uint8_t pinBotao = 0;

void setup() 
{
  led1.ligar(); // O LED 1 irá ligar
  led2.piscar(1, 20); // O LED 2 irá piscar 20 vezes com uma frequencia de 1 Hz, após essa quantidade de repetições ele ira desligar totalmente
}

void loop() 
{
  led1.update();
}


