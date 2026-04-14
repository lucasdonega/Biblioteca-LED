#ifndef LED_h
#define LED_h

#include <Arduino.h>

/**
* @class Led
* @brief Classe para controle não bloqueante de um LED.
* Permite ligar, desligar, ligar por tempo determinado,
* piscar continuamente e piscar por quantidade definida.
*
* @note O método update() deve ser chamadado continuamente dentro do loop().
*/
class Led
{
    private:
        uint8_t pino;
        bool estado;
        bool desligarPorTempo = false;
        uint32_t desligarNoMomento;

        uint32_t tempoAnteriorPiscar;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;

        /** 
         * @brief Processa a lógica de piscado do LED.
         */
        void funcaoPiscar();
        
        /** 
         * @brief Processa o desligamento temporizado.
         */
        void funcaoDesligamento();

        public:
        
        /**
         * @brief Constroi um objeto Led.
         * @param pin Número do pino digital onde o LED está conectado.
         */
        Led(uint8_t pin); 

        /**
         * @brieg Liga o LED continuamente
         */
        void ligar();

        /**
         * @brief Liga o LED por um tempo determinado.
         * @param tempoLigado_ms Tempo, em milissegundos, que o LED ficará ligado.
         */
        void ligar(uint32_t tempoLigado_ms); 

        /** 
         * @brief Desliga o LED e cancela os modos automáticos.
         */
        void desligar(); 

        /** 
         * @brief Inicia a piscada contínua em 1 HZ.
         */
        void piscar();
   
        /**
         * @brief Indica o tempo de espera em que o LED fica ligado.
         * @param frequencia indica a frequencia da piscada em hz.
         */
        void piscar(float frequencia);

        /**
         * @brief Indica as repetições que ocorrerá no entre o LED ligar e ele desligar.
         * @param frequencia Indica a frequencia da piscada em hz.
         * @param repeticoes Indica a quantidade de repetições.
         */
        void piscar(uint8_t frequencia, uint16_t repeticoes);

        /**
         * @brief Pega o estado do LED.
         */
        bool getEstado();

        /**
         * @brief Retorna o número do pino em que o LED é declarado
         */
        uint8_t getPino(); 

        /**
         * @brief Define manualmente o estado do LED.
         * @param estado true para ligado, false par desligado.
         */
        void setEstado(bool estado);

        /**
        * @brief Ele inverte o estado do LED.
        */
        void alternar(); 

        /**
        * @brief Atualiza o estado do LED.
        */
        void update();

        
};

#endif
