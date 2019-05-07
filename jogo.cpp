#include <iostream>
#include <string>
#include <map>
#include <cstdlib>

#include "jogo.h"
#include "jogador.h"

using namespace std;
/**
 * @brief adicionar jogadores no jogo
 * 
 * @param pessoa 
 * @return int 
 */
int Jogo::adc_jogad_no_jogo(Jogador pessoa)
{   
    gamers.insert(pair<string, Jogador>(pessoa.get_pessoa(), pessoa));

    return 0;
}
/**
 * @brief adicionar jogadores em um novo map de acordo com as regras do jogo
 * 
 * @param pessoa 
 */
void Jogo::add_gamers_final(Jogador pessoa)
{   
    gamers_final.insert(pair<string, Jogador>(pessoa.get_pessoa(), pessoa));
}
/**
 * @brief Elimina jogador de acordo com a regas do jogo
 * 
 * @param jogador 
 */
void Jogo::remove_jogador(Jogador jogador)
{
    this->gamers.erase(jogador.get_pessoa());
}
/**
 * @brief Pegar todos os jogadores do jogo
 * 
 * @return map<string,Jogador>& 
 */
map<string,Jogador>& Jogo::get_gamers()
{
    return this->gamers;
}
/**
 * @brief Pegar todos os jogadores do novo map
 * 
 * @return map<string,Jogador>& 
 */
map<string,Jogador>& Jogo::get_gamers_final()
{
    return this->gamers_final;
}
/**
 * @brief Pegar o numero que foi definido para ser o limite do jogo
 * 
 * @return int 
 */
int Jogo::get_num_jogo()
{
    return this->num_jogo;
}
/**
 * @brief Define o numero que limita e dar nome ao jogo
 * 
 * @param num_jogo 
 */
void Jogo::set_num_jogo(int num_jogo)
{
    this->num_jogo = num_jogo;
}
