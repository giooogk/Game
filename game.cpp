#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include "player.h"
#include "game.h"

using namespace std;

void Game::set_gamer()
{
    this->gamer;
}

void Game::all_gamers(Player nickname)
{
    gamer.push_back(nickname);
}

void Game::roud(list <Player> gamer){
    list <Player> :: iterator it;
    it = gamer.begin();
    
    for(it; it != gamer.end(); ++it){
        //passar em jogador em jogardor e perguntar o que quer fazer e se joga os dados ou para 
    }
}