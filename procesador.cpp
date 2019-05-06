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

            cout << jogo.get_gamers().size() << endl;
            cout << it->second.get_pessoa() << " - Pontos: " << it->second.get_pontos() << endl;
            cout << "Digite sua acao" << endl;
            cout << "1- para rodar os dados" << endl;
            cout << "2- para parar" << endl;

            cin >> aux_jogo;

            /* REGRAS */
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
                    cout << "Jogador Eliminado!" << endl;
                    jogo.remove_jogador(it->second);
                    cin.get();
                }

                if (it->second.get_pontos() == jogo.get_num_jogo())
                {
                    cout << "Jogador Ganhou!" << endl;
                    win = 5;
                    break;
                    cin.get();
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
            system("CLS");
            cout << "Jogador Ganhou a partida!" << endl;
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
            system("CLS");
            cout << "Jogador Campeao da partida foi: " << J->get_pessoa() << endl;
            
        }
        
        
    }

    return 2;
}

int main(int argc, char const *argv[])
{
    int aux_2 = 0;
    int endGame = 1;
    srand((unsigned int)0);
    Jogo jogo;
    Jogador *cara = new Jogador();

    int op = 0;
    string aux = "";

    while (endGame == 1)
    {
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
            system("CLS");
            break;

        case 2:
            if (jogo.get_gamers().size() > 0)
            {
                cout << "Digite target(N) do jogo: " << endl;
                cin >> aux_2;
                system("CLS");
                jogo.set_num_jogo(aux_2);

                endGame = game(jogo);
                cout << endGame;
                cin.get();
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