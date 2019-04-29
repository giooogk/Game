#include <iostream>
#include "dado.h"

 int main(int argc, char const *argv[])
 {
    Dado d1;  
    Dado d2;
    std::cout << d1.get_sort() << " - " << d2.get_sort(); 
    return 0;
 }
