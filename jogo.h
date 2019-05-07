#ifndef jogo_H
#define jogo_H

#include <map>
#include "jogador.h"

using namespace std;
/**
 * @brief Classe do tipo jogo
 * 
 */
class Jogo{
    private:
    /**
     * @brief Atributos/variáveis classe jogo
     * 
     */
    map<string,Jogador>  gamers;
    map<string,Jogador>  gamers_final;
    int num_jogo;   
    
    public:
    /**
     * @brief Médotos de funcionalidades do jogo
     * 
     */
    int adc_jogad_no_jogo(Jogador pessoa);
    void add_gamers_final(Jogador pessoa);
    void remove_jogador(Jogador jogador);
    /**
     * @brief Médotos para pegar e atribuir valores das variáveis
     * 
     */
    map<string,Jogador>& get_gamers();
    map<string,Jogador>& get_gamers_final();
    int get_num_jogo();
    void set_num_jogo(int num_jogo);
};

#endif