#include <iostream>
#include <string>
#include "jogador.h"
/**
 * @brief Inserir o nome do jogador
 * 
 * @param jogador 
 */
void Jogador::set_pessoa(string jogador)
{
    this->pessoa = jogador;
}
/**
 * @brief Pegar o nome do jogador
 * 
 * @return string 
 */
string Jogador::get_pessoa()
{
    return this->pessoa;
}
/**
 * @brief Inserir os pontos do jogador
 * 
 * @param p 
 */
void Jogador::set_pontos( int p)
{
   this->pontos += p;
}
/**
 * @brief Pegar os pontos do jogador
 * 
 * @return int 
 */
int Jogador::get_pontos()
{
    return this->pontos;
}
/**
 * @brief Construct a new Jogador:: Jogador object
 * 
 * @param nome 
 * @param pontos 
 */
Jogador::Jogador(string nome, int pontos)
{
    this->pontos = pontos;
    this->pessoa = nome;
}
/**
 * @brief Construct a new Jogador:: Jogador object
 * 
 */
Jogador::Jogador()
{
    
}