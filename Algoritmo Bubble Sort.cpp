#include <iostream>
#include <string.h>

using namespace std;


#define N 5

int main(){

    int i, aux, count; //i de incremento, aukiliar e count para contar as vezes q o algoritmo será executado 
    int lista[N]; //Declarar uma aray com o valor de uma constante definida em #define 

    cout << endl << "Entre com os numeros paa preencher o vetor, tecle enter a cada numero" << endl;

    for(i=0; i<N; i++){ //Com um laço for, capturo essesvalores e guardo no vetor
        cin >> lista[i]; //com a função scanf capturo numeros inteiros %d e vou armazenando no vetor lista na posição i 
                                    //O laço for vai de i=0 até i<N(tamanho do vetor, nesse caso 5)
      }                             // o número 3 entre %d é para dar um espaço de 4 casas entre cada número e não acavala-los 

//Algoritmo de Ordenação Buble Sort q conciste em dois laços for encadeados e um if dentro do 2º laço for
        for(count=1;count<N;count++) { //1º laço for é um contador q vai de 1 até tamanho do vetor -1. ele vai fazer as repetições do laço de acordo com o tamaho pre estabelecido
            for(i=0; i<N-1; i++){ //2º laço for declara i q vai de zero até tamanho menor que -1, ela vai fazer as posições no vetor. Por isso, começa em 0
                if(lista[i] > lista[i+1]){ //se o vetor i for maior que o da posição seguinte q é i+1 
                aux = lista[i];            //Faz o algoritmo de troca com essas premissas. aux recebe o q tá em lista[i]        
                lista[i] = lista[i+1];    // lista[i] recebe o q está em posição seguinte lista[i+1]  
                lista[i+1] = aux;         //  posição seguinte lista[i+1] recebe o valor de aux a posição anterior e vai para o próximo laço                      
                }                             
            }
        }
            cout << endl << "Numeros em ordem crescente: ";
            for(i=0; i<N; i++) { //Esse laço for exibe os números ordenados na tela
                cout << " " << lista[i] << " ";
        }

    cout << endl << " ";

    return 0;
}