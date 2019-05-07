#ifndef jogador_H
#define jogador_H

#include <string>
#include <cstdlib>


using namespace std;
/**
 * @brief Classe do tipo jogador
 * 
 */
class Jogador{
    private:
    /**
     * @brief Atributos/variáveis da classe jogador
     * 
     */
    string pessoa;
    int pontos;

    public:
    /**
     * @brief Médotos para pegar e atribuir valores das variáveis
     * 
     */
    void set_pessoa(string pessoa);
    void set_pontos(int p);
    string get_pessoa();
    int get_pontos();
    /**
     * @brief Construct a new Jogador object
     * 
     * @param nome 
     * @param pontos 
     */
    Jogador(string nome, int pontos);
    /**
     * @brief Construct a new Jogador object
     * 
     */
    Jogador();

};

#endif
