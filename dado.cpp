#include <cstdlib>
#include "dado.h"

using namespace std;

int Dado::get_sort()
{
   return (rand() % 6) + 1;
} 