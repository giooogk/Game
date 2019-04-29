#include <cstdlib>
#include "dado.h"
#include <ctime>

int Dado::get_sort()
{
    srand((unsigned)time(0));
    return (rand() % 6) + 1;
} 