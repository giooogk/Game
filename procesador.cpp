#include <iostream>
#include <string>

#include "jogador.h"
#include "jogo.h"

using namespace std;

int main()
{   
    vector<Jogador> gamers;
    Jogador cara;

    int op = 0;
    int fun;
    string aux = "";
    cout << "1 - Adicionar jogador" << endl;
    cout << "2 - Iniciar partida" << endl;

    cin >> op;
    
    switch (op){
        case 1:
            cout << "Digite o nome do jogador:" << endl;
            cin.ignore();
            getline(cin,aux);
            cara.set_pessoa(aux);

            gamers.push_back(cara);         

            break;
        
        case 2:
            

            break;   
    }
    
    return 0;
}