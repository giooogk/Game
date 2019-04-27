#ifndef game_H
#define game_H
#include <list>
#include <string>
#include "player.h"


class Game
{
    private:
    std::list <Player> gamer;


    public:
    void all_gamers(Player nickname);
    void set_gamer();
    void roud(std::list <Player> gamer);

};

#endif