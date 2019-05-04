#ifndef player_H
#define player_H
#include <string>

using namespace std;

class Player
{
    private:
    string nickname;
    int points;

    public:
    
    int get_points();
    void set_points(int points_time);
};

#endif