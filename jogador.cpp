#include <iostream>
#include <string>
#include <cstdlib>
#include "jogador.h"


string Jogador::set_pessoa(string jo)
{
    this->pessoa = jo;
}

void Jogador::set_pontos(int ponto_atu)
{
   this->pontos = ponto_atu;
}

int Jogador::get_pontos()
{
    return this->pontos;
}

int Jogador::get_dado(){
    return 1 +(rand()%6);
}