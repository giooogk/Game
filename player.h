#ifndef player_H
#define player_H
#include <string>

class Player
{
    private:
    std::string nickname;
    int points;

    public:
    int score(int points_time);
    int get_points();
    void set_points(int points_time);
};

#endif