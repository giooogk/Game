#include <iostream>
#include "player.h"

int Player::get_points()
{
    return this->points;
}

void Player::set_points(int points_time)
{
    this->points = points + points_time;
}