#ifndef jogo_H
#define jogo_H

#include <map>
#include "jogador.h"

using namespace std;

class Jogo{
    private:
    map<string,Jogador>  gamers;
    map<string,Jogador>  gamers_final;
    int num_jogo;   
    
    public:
    int adc_jogad_no_jogo(Jogador pessoa);
    void add_gamers_final(Jogador pessoa);
    void remove_jogador(Jogador jogador);
    
    map<string,Jogador> get_gamers();
    map<string,Jogador> get_gamers_final();
    int get_num_jogo();
    void set_num_jogo(int num_jogo);
};

#endif