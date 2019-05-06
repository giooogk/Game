#include <iostream>
#include <string>
#include "jogador.h"

void Jogador::set_pessoa(string jogador)
{
    this->pessoa = jogador;
}
string Jogador::get_pessoa()
{
    return this->pessoa;
}

void Jogador::set_pontos( int p)
{
   this->pontos += p;
}

int Jogador::get_pontos()
{
    return this->pontos;
}
