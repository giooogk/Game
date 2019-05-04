#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "player.h"
#include "game.h"
#include "dado.h"

using namespace std;

int Game::add_player(Player jo)
{
    gamers.push_back(jo);

    return 0;
}

int Game::action(vector <Player> gamer)
{
    vector <Player> :: iterator it;
    it = gamer.begin();
    string action = 0;
    
    for(it; it != gamer.end(); it++)
    {
        if(it->get_points < target)
        {
            cout << "Digite sua ação" << endl;
            cout << "1- para rodar os dados" << endl;
            cout << "2- para parar" << endl;
            
            cin.ignore();
            getline(cin, action);

            if(action == "1")
            {
                //joga o dado
            }
            else if(action == "2")
            {
                //jogador removido da lista de gamers
                //jogador é adicionado na lista de final
            }
            else
            {
                cout << "Erro!!! Operação invalida" << endl;
            }
            
        }
        else
        {
            //jogador eliminado do jogo
        }        
    }
    
    return 0;
}

vector<Player> Game::get_gamer()
{
    return this->gamers;
}

vector<Player> Game::get_final_gamers()
{
    return this->final_gamers;
}

int Game::get_target()
{
    return this->target;
}
    
void Game::set_target(int target)
{
    this->target = target;
}

void Game::set_player(Player player)
{
    this->gamers.push_back(player);
}
