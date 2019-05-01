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
    void roud(std::list <Player> gamer);
    int action(std::list <Player> gamer);
    void regras(std::list <Player> gamer);
    std::list<Player> all_gamers();
    
    int get_target();
    void set_player(Player nickname);
    void set_target(int target);

};

#endif