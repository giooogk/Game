#include <iostream>
#include <list>
#include <string>
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
