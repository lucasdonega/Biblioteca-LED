/* 
Autor: Lucas Donega
Programa: Exemplo 4 - Biblioteca LED
Descrição: Este é o exemplo 4 de como funciona a Biblioteca LED feita por mim
Data: 25/03/2026
Versão: 1.0
*/

#include <Arduino.h>
#include <LED.h>

Led led1(42);
const uint8_t pinBotao = 0;
int tempoNormal = 2000;
int tempoAnterior = 0;
int estadoLed = false;

void setup() 
{
 if(millis() - tempoAnterior >= tempoNormal)
 {
  tempoAnterior = millis(); 

        estadoLed = !estadoLed; // Inverte o estado do LED

        if (estadoLed)
            led1.ligar(); //Liga o LED
        else
            led1.desligar(); //Desliga o LED
    }
}

void loop() 
{
  

  led1.update(); 
}
