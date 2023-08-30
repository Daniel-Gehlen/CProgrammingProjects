#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main(void){

    struct horario{ // Definindo a astruct com o nome que quiser
        int *pHora; // Dentro da estruc vou informar os ponteiros
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje; // Tenho que declarar uma variável do tipo de estruc acima
    
    int hora = 200;       // Os ponteiros precisam apontar para algum lugar na memória. Precisaremos de três variáveis para onde eles vão apontar.
    int minuto = 300;
    int segundo = 500;

    hoje.pHora = &hora; // Esse ponteiro aponta para o endereço da variável hora
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    cout << "Hora - " << *hoje.pHora << endl; // * para acessar os valores daqueles ponteiros 
    cout << "Minuto - " << *hoje.pMinuto << endl;
    cout << "Segundo - " << *hoje.pSegundo << endl;

    *hoje.pSegundo = 1000; // Se quiser alterar e printar novo valor

    cout << "Segundo - " << *hoje.pSegundo << endl;

    getchar();

    return 0;
}