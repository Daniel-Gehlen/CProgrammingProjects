// Temos várias operações diferentes. Para rodar cada, precisa tirar as barras duplas de comentério.

#include <iostream>
#include <string.h>

using namespace std;

int main(void){
    int vetor[3] = {1, 2, 3};
    //int *ponteiro = vetor; // Se o meu ponteiro está apontando para um vetor de tamanho 3, não preciso especificar. Ele aponta simplesmente para um endereço de memória
                            // do 1º membro do vetor e não precisa do &

    //cout << *ponteiro;

    // int *ponteiro = &vetor[0]; poderia forçar que ele aponte para um membro específico
    // cout << ponteiro; se escrever sem *, ele mostra o endereço do 1º membro
    // cout << *ponteiro; 
    
    //Aqui vamos printar os endereços de memória de cada membro 

        //int *ponteiro = &vetor[0];
        //cout << endl << ponteiro;

        //ponteiro = &vetor[1];
        //cout << endl << ponteiro;

        //ponteiro = &vetor[2];
        //cout << endl << ponteiro;

    //Aqui vamos adicionar um encremento que faz com queele aponte para o proximo membro

        //int *ponteiro = &vetor[0];
        //++ponteiro; //Antes do cout. Vai mostrar o 2º membro
        //++ponteiro; // Vai mostrar o 3º membro
        //cout << endl << ponteiro;

    // Vamos alterar o valor de um vetor através de um ponteiro

        int *ponteiro = vetor;

        *(ponteiro +1) = 10; // com o *, digo que quero acessar o valor do endereço de memória especificado entre parênteses.

        cout << endl << vetor[1]; // então ele mostra o valor de 10 para esse vetor

    getchar();
    return 0;

}