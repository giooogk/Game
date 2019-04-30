#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include "player.h"
#include "game.h"

using namespace std;

void Game::set_player(Player player)
{
    this->gamer.push_back(player);
}

list<Player>  Game::all_gamers()
{
    return this->gamer;
}

void Game::roud(list <Player> gamer){
    list <Player> :: iterator it;
    it = gamer.begin();
    
    for(it; it != gamer.end(); ++it)
    {       
        
        //se o jogador estourar ele sai
        if(it->get_points() > this->target)
        {
            gamer.remove(*it);
        }
        else
        {
            
        }

        //passar em jogador em jogardor e perguntar o que quer fazer e se joga os dados ou para 
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