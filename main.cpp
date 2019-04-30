#include <iostream>
#include <cstdlib>
#include "dado.h"


using namespace std;

 int main(int argc, char const *argv[])
 {
    unsigned int a = 100000;
    srand(a);
    
    Dado d1;
    Dado d2;

    for (int i = 0; i < 100; i++)
    {
        cout << d1.get_sort() + d2.get_sort() << endl;
    }

 }
