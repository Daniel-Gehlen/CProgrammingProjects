#include <iostream>
#include "stdio.h"
#include "locale.h"

// Calcular a Potenciação

using namespace std;

int main() {
    
    double base, pot;
    int expoente, n;
    char novamente;
    
    setlocale(LC_ALL,"Portuguese");
    cout << "Bem-vindo(a) a calculadora (totalmente nao otimizada) de potenciacao!";
    
    do{
        cout << "Entre com a base: ";
        cin >> base;
        cout << "Entre com o expoente: ";
        cin >> expoente;
        n = 0;
        pot = base;
        //3 casos: expoente = 0, < 0 e > 0, nesses 2 últimos podendo ser = 1 ou = -1
        if (expoente == 0){
            //Qualquer número elevado a 0 é 1
            cout << "O resultado da potenciacao e: 1";
        }
        else
            if (expoente > 0){
                //Fazer pot * base o tanto de vezes que corresponde ao expoente
                do {
                    pot = pot * base;
                    n += 1;
                } while(n + 1 < expoente);
                
                if (expoente == 1){
                    //Qualquer número elevado a 1 é ele mesmo
                    cout << "O resultado da potenciacao e: " << base;
                }
                else {
                    cout << "O resultado da potenciacao e: " << pot;
                }
            }
            else
                if (expoente < 0){
                    //Mesma mecânica para expoente > 0, mas inverte-se pot no final
                    expoente = -expoente;
                    do {
                        pot = pot * base;
                        n += 1;
                    } while(n + 1 < expoente);
                    
                    if (expoente == 1){
                        //Qualquer número elevado a -1 é 1/ele mesmo
                        cout << "O resultado da potenciacao e: " << 1/base;
                    }
                    else {
                        cout << "O resultado da potenciacao e: " << 1/pot;
                    }
                }
        cout << "Quer calcular novamente (s/n)? ";
        cin >> novamente; //Teste para calcular novamente
    } while (novamente == 's');
    
    return 0;
}