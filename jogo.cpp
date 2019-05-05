#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

#include "jogo.h"
#include "jogador.h"
//#include "dado.h"

using namespace std;

int Jogo::adc_jogad_no_jogo(Jogador pessoa)
{   
    gamers.push_back(pessoa);

    return 0;
}

void Jogo::add_gamers_final(Jogador pessoa)
{   
    gamers_final.push_back(pessoa);
}

void Jogo::remove_jogador(vector<Jogador>::iterator it)
{
    this->gamers.erase(it);
}

vector<Jogador> Jogo::get_gamers()
{
    return this->gamers;
}

vector<Jogador> Jogo::get_gamers_final()
{
    return this->gamers_final;
}

int Jogo::get_num_jogo()
{
    return this->num_jogo;
}

void Jogo::set_num_jogo(int num_jogo)
{
    this->num_jogo = num_jogo;
}
