#ifndef game_H
#define game_H

#include <vector>
#include <string>
#include "player.h"
#include "dado.h"

using namespace std;

class Game
{
    private:
    vector<Player> gamers; 
    vector<Player> final_gamers; 
    int target;


    public:
    int add_player(Player jo);
    int action(vector<Player> gamer);
 
    vector<Player> get_gamer();
    vector<Player> get_final_gamers();
    int get_target();
    void set_target(int target);
    void set_player(Player nickname);

};

#endif