#ifndef jogador_H
#define jogador_H

#include <string>
#include <cstdlib>


using namespace std;

class Jogador{
    private:
    string pessoa;
    int pontos;

    public:
    void set_pessoa(string pessoa);
    void set_pontos(int p);
    string get_pessoa();
    int get_pontos();

};

#endif
