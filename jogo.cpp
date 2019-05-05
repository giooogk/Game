#include <iostream>
#include <string>
#include <list>
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


void Jogo::acao_jogador(vector<Jogador> pessoas)
{
    vector<Jogador> :: iterator it;
    it = gamers.begin();
    string acao = 0;
    int x;
    for(it; it != gamers.end(); it++)
    {
        if(it->get_pontos < num_jogo)
        {
            cout << "Digite sua ação" << endl;
            cout << "1- para rodar os dados" << endl;
            cout << "2- para parar" << endl;
            
            cin.ignore();
            getline(cin, acao);

            if(acao == "1")
            {
              it->get_dado();

            }
            else if (acao == "2")
            {
                gamers_final.push_back(*it);
                gamers.erase(it);
                
            }
        }
        else
        {
            gamers.erase(it);
        }
        
    }

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
