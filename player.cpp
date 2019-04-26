#include <iostream>
#include "player.h"

int Player::get_points()
{
    return this->points;
}

int Player::set_points(int points_time)
{
    return this->points = points_time;
}

int Player::score(int points_time)
{
    return this->points = points + points_time;
}