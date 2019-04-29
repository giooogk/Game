#ifndef game_H
#define game_H
#include <list>
#include <string>
#include "player.h"


class Game
{
    private:
    std::list <Player> gamer;
    int target;


    public:
    list<Player> all_gamers();
    void set_player(Player nickname);
    void roud(std::list <Player> gamer);

    int get_target();
    void set_target(int target);

};

#endif