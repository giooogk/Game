#ifndef jogador_H
#define jogador_H

#include <string>
#include <cstdlib>


using namespace std;

class Jogador{
    private:
    string pessoa;
    int pontos;
    int dado;

    public:
    string set_pessoa(string pessoa);
    void set_pontos(int ponto_atu);
    int get_pontos();
    int get_dado();
};

#endif
