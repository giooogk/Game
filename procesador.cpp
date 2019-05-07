/**
 * @file main.cpp
 * @author Frankleiton Levy (frankleiton@gmail.com) e Giovanna Karla (macedo1999.gk@gmail.com)
 *
 * @brief  Projeto de um jogo que vai até N 
 * @version 2.4
 *
 * since 23-04-2019
 * @date 07-05-2019
 *
 * @sa Materiais disponiveis no SIGAA da matéria de LP-I
 * 
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "jogador.h"
#include "jogo.h"

using namespace std;
/**
 * @brief Dado que utilizamos para o jogo 
 * 
 * @return int 
 */
int jogarDado()
{
    return 1 + (rand() % 6);
}
/**
 * @brief função que inicia o jogo
 * 
 * @param jogo 
 * @return int 
 */
int game(Jogo jogo)
{

    int aux_jogo;
    int win = 3;
    int dado1 = 0;
    int dado2 = 0;
    Jogador *J = new Jogador();



    while (win == 3)
    {
        map<string, Jogador>:: iterator it_temp;
        for (auto it = jogo.get_gamers().begin(); it != jogo.get_gamers().end(); it = it_temp)
        {
            it_temp = it;
            it_temp++;

            cout << "Jogador: " << it->second.get_pessoa() << " - Pontos: " << it->second.get_pontos() << " - Alvo: " << jogo.get_num_jogo() <<endl;
            cout << "-------------Digite sua acao-------------" << endl;
            cout << "1- para rodar os dados" << endl;
            cout << "2- para parar" << endl;

            cin >> aux_jogo;

            /**
             * @brief Condições que condiz com as regras do jogo 
             * 
             */
            if (aux_jogo == 1)
            {
                system("CLS");
                dado1 = jogarDado();
                dado2 = jogarDado();

                it->second.set_pontos(dado1+dado2);

                // cout << "dado1 " << dado1 << endl; 
                // cout << "dado2 " << dado2 << endl; 

                if (it->second.get_pontos() > jogo.get_num_jogo())
                {
                    cout << "Jogador "<< it->second.get_pessoa() <<" Eliminado!" << endl;
                    jogo.remove_jogador(it->second);
                    
                }

                if (it->second.get_pontos() == jogo.get_num_jogo())
                {
                    cout << "Jogador "<< it->second.get_pessoa() <<" Ganhou! por chegar ao numero exato" << endl;
                    win = 5;
                    break;
                    
                }

            }

            if(aux_jogo == 2)
            {
                jogo.add_gamers_final(it->second);
                jogo.remove_jogador(it->second);
                auto teste = it;
                teste++;
            }

        }

        if (jogo.get_gamers().size() == 1 && it_temp->second.get_pontos() <= jogo.get_num_jogo())
        {
            if (system("clear") != 0)
            {
                system("CLS");
            }
            cout << "Jogador "<< it_temp->second.get_pessoa() <<" Ganhou a partida!" << endl;
            win = 5;
        }

        if (jogo.get_gamers().size() == 0)
        {
            J->set_pontos(0);
            for (auto &jj: jogo.get_gamers_final())
            {
                if (jj.second.get_pontos() >= J->get_pontos())
                {
                    *J = jj.second;
                }
            }
            win = 5;
            if (system("clear") != 0)
            {
                system("CLS");
            }

            if (J->get_pessoa().empty())
            {
                cout << "Jogo sem vencedores!" << endl;
            }
            else
            {
                cout << "Jogador Campeao da partida foi: " << J->get_pessoa() << endl;
            }
            
            
        }
        
        
    }

    return 2;
}

int main(int argc, char const *argv[])
{
    int aux_2 = 0;
    int endGame = 1;
    srand((unsigned int)time(0));
    Jogo jogo;
    Jogador *cara = new Jogador();

    int op = 0;
    string aux = "";
    /**
     * @brief Menu do jogo
     * 
     */
    while (endGame == 1)
    {
        cout << "-------------Jogo muito divertido-------------" << endl;
        cout << "1 - Adicionar jogador" << endl;
        cout << "2 - Iniciar partida" << endl;

        cin >> op;
        system("CLS");
        switch (op)
        {
        case 1:
            cout << "Digite o nome do jogador:" << endl;
            cin.ignore();
            getline(cin, aux);
            cara->set_pessoa(aux);
            cara->set_pontos(0);
            jogo.adc_jogad_no_jogo(*cara);
            if (system("clear") != 0)
            {
                system("CLS");
            }
            break;

        case 2:
            if (jogo.get_gamers().size() > 0)
            {
                cout << "Digite target(N) do jogo: " << endl;
                cin >> aux_2;
                if (system("clear") != 0)
                {
                    system("CLS");
                }
                jogo.set_num_jogo(aux_2);

                endGame = game(jogo);
                
            }
            else
            {
                cout << "Nao ha jogadores para iniciar o game!" << endl;    
            }
            
            break;
        }
    }

    return 0;

}