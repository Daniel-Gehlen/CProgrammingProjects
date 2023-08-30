#include <iostream>
#include <string.h>

using namespace std;

int somarVetor(int vetor[], const int n){

    int soma = 0; //Essa variável será onde estarei jgando cada soma do meu vetor
    int *ponteiro;
    int *const finalVetor = vetor + n; //Qunado crio um vero com o sinal =, ele estará apontando para o 1º membro do vetor.
                                        //Nesse caso estou adicionando n, n será o tamanho do meu vetor, apontará para todos ao último membro.
    for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro){ //Isso quer dizer q a cada ciclo o ponteiro vai chegando mais perto do último membro do vetor
        soma += *ponteiro; //A nossa variável soma conterá a soma de todos membros do vetor
    }
    return soma;
}

int main(void){

    int somarVetor(int vetor[], const int n); // Declaração da função q está lá em cima. Essa função deve somar os membros de um vetor.
    int vetor[10] = {5, 5, 5, 5, 5, 5, 5, 5, -20, 5}; //Temos um vetor de valor 10 e todos os vetores inicializados com valor 5, ou podemos mudar os valores.
                                                        // Temos de fazer essa função retornar a soma dos membros lá na função de cima
    cout << endl << "A soma dos membrs do vetor = " << " " << somarVetor(vetor, 10); //Um print no %i que é a somarVetor lá de cima

    getchar();

    return 0;
}