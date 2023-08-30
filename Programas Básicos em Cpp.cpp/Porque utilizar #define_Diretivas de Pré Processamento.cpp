#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

#define NUMERO_MAXIMO_ALUNOS 1000 //Se não crio esse #define global, em um projeto grande, teria todo trabalho de atualizar valor em cada função.
                                    //Isto é, definimos q o num máx de alunos é 1000. Se precisar atualizar, atualiza todos de uma vez somente aqui.
void umaFuncao(void){
        cout << endl << NUMERO_MAXIMO_ALUNOS;
}

void umaOutraFuncao(void){
        cout << endl << NUMERO_MAXIMO_ALUNOS << endl;
}

int main(void){
        void umaFuncao(void);
        void umaOutraFuncao(void);

        cout << endl << NUMERO_MAXIMO_ALUNOS;

        umaFuncao();
        umaOutraFuncao();

        system("Pause");
        return 0;
}