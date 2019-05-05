#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "jogador.h"
#include "jogo.h"

using namespace std;

int jogarDado()
{
    return 1 + (rand() % 6);
}

void game(Jogo jogo)
{

    int aux_jogo;
    int win = 3;
    int dado1 = 0;
    int dado2 = 0;
    Jogador J;

    while (win == 3)
    {
      
        for (int i = 0; i < jogo.get_gamers().size(); i++)
        {
            cout << jogo.get_gamers()[i].get_pessoa() << " - Pontos: " << jogo.get_gamers()[i].get_pontos() << endl;
            cout << "Digite sua acao" << endl;
            cout << "1- para rodar os dados" << endl;
            cout << "2- para parar" << endl;

            cin >> aux_jogo;

            /* REGRAS */
            if (aux_jogo == 1)
            {
                dado1 = jogarDado();
                dado2 = jogarDado();

                cout << dado1; 
                cout << dado2; 

                if (jogo.get_gamers()[i].get_pontos() > jogo.get_num_jogo())
                {
                    cout << "Jogador Eliminado!";
                    jogo.remove_jogador(jogo.get_gamers()[i]);
                }

                if (jogo.get_gamers()[i].get_pontos() == jogo.get_num_jogo())
                {
                    cout << "Jogador Ganhou!";
                    win = 5;
                    break;
                }


            }

            if(aux_jogo == 2)
            {
                jogo.add_gamers_final(jogo.get_gamers()[i]);
                jogo.remove_jogador(jogo.get_gamers()[i]);
            }

        }

        if (jogo.get_gamers().size() == 1 && jogo.get_gamers()[0].get_pontos() <= jogo.get_num_jogo())
        {
            cout << "Jogador Ganhou a partida!";
        }

        if (jogo.get_gamers().size() == 0)
        {
            J.set_pontos(0);
            for (int k = 0; k < jogo.get_gamers_final().size(); k++)
            {
                if (jogo.get_gamers_final()[k].get_pontos() >= J.get_pontos())
                {
                    J = jogo.get_gamers_final()[k];
                }
                
            }

            cout << "Jogador Campeão da partida foi " << J.get_pessoa() << endl;
            
        }
        
        
    }
}

int main(int argc, char const *argv[])
{
    int aux_2 = 0;
    srand((unsigned int)NULL);
    Jogo jogo;
    Jogador cara;

    int op = 0;
    string aux = "";

    while (1)
    {

        cout << "1 - Adicionar jogador" << endl;
        cout << "2 - Iniciar partida" << endl;

        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Digite o nome do jogador:" << endl;
            cin.ignore();
            getline(cin, aux);
            cara.set_pessoa(aux);
            cara.set_pontos(0);
            jogo.adc_jogad_no_jogo(cara);

            break;

        case 2:
            cout << "Digite target(N) do jogo: " << endl;
            cin >> aux_2;

            jogo.set_num_jogo(aux_2);

            game(jogo);
            break;
        }
    }

    return 0;
}