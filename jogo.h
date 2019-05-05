#ifndef jogo_H
#define jogo_H

#include <list>
#include <vector>
#include "jogador.h"


class Jogo{
    private:
    vector<Jogador> gamers;
    vector<Jogador> gamers_final;
    int num_jogo;   
    
    public:
    int adc_jogad_no_jogo(Jogador pessoa);
    void add_gamers_final(Jogador pessoa);
    void remove_jogador(vector<Jogador>::iterator it);
    
    vector<Jogador> get_gamers();
    vector<Jogador> get_gamers_final();
    int get_num_jogo();
    void set_num_jogo(int num_jogo);
};

#endif