#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include <cstdlib>
#include "player.h"
#include "game.h"
#include "dado.h"

using namespace std;

int Game::action(list <Player> gamer)
{
    //objetivo de percorrer todos os jogadores e dar a opção de rodar os dados ou parar
    //enquanto tiver jogadores
    list <Player> :: iterator it;
    it = gamer.begin();
    while(it != gamer.end())
    {
        int resposta = 0;
        cin >> resposta;
        if (resposta == 1)
        {
           //rodar o dado 
        }
        else if (resposta ==2)
        {
            //parar
        }
        else
        {
            cout << "ERRO 404" << endl; 
        }
        
    }
    
    

    return;
}

void Game::regras(list <Player> gamer)
{
    list <Player> :: iterator it;
    it = gamer.begin();
    
    for(it; it != gamer.end(); ++it)
    {   
        //se o jogador parar ele nao jogar mais    
        if (/*se o joador na sua vez de fazer uma ação parar ele não joga mais*/)
        {
            //iginorar o jogador/pular a vez dele
        }
        //se o jogador estourar ele sai
        else if(it->get_points() > this->target)
        {
            gamer.remove(*it);
        }
        else
        {
            //continua jogando o dado até todo mundo parar ou so restar um que nao estourou
        }
 
    }
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
    this->gamer.push_back(player);
}

list<Player>  Game::all_gamers()
{
    return this->gamer;
}