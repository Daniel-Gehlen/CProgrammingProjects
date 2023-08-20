//Crie um algoritmo que leia um vetor com os dados de 5 carros, ano e preço:
// Leia um valor p e mostre as informações de todos com preço menor que p. */

#include <iostream>
#include <string.h>

using namespace std;

typedef struct carro{
    char marca[36];
    int ano;
    float preco;
}carro;

int main(){
    int N = 3, i;
    carro car[N];
    float p;

    for(i = 0; i < N; i++){ //for para fazer todo processo de repetição do vetor

        cout << endl << "Marca: ";
        cin >> car[i].marca; // Indices do vetor[i] como car está com o vetor, colocamos em cada um.
        cout << "Ano: ";           // Assim, ele vai ler o valor de cada um e passar para o vetor.
        cin >> car[i].ano;   // O struct vai armazenar os dados nesse vetor com esse processo.
        cout << "Preço: ";
        cin >> car[i].preco;
    }

    cout << endl << "Valor de p: ";
    cin >> p;

    for(i = 0; i < N; i++) // Outro for para exibir os dados
    {  
        if (car[i].preco < p) 
        {
            cout << endl << "Marca: " << car[i].marca << endl; // Temos de por os indices do vetor porque o compilador já entende que a struct é um vetor.
            cout << "Ano: " << car[i].ano << endl;
            cout << "Preço: RS" << car[i].preco << endl;
        } 
    }

    return 0;
}