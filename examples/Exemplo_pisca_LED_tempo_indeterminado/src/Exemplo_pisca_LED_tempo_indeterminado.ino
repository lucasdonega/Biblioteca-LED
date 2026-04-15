/* 
Autor: Lucas Donega
Programa: Exemplo 2 - Biblioteca LED
Descrição: Exercício 2 do LED
Data: 15/04/2026
Versão: 1.0
*/

#include "LED.h"
#include <Arduino.h>

// Instancias
Led led1(42);

const uint8_t pinBotao = 0;

void setup()
{
  
  led1.piscar(); //O LED irá piscar por um período indeterminado de tempo.
}

void loop()
{
  led1.update(); //A função update que verifica se a função piscar deve rodar ou não, ela quem faz a função update rodar.
}

