#include <iostream>
#include<stdio.h>

// Preenchendo o Vetor e Dobando os Valores

using namespace std;

void inserir(int a[]) {
    int i = 0;
    for(i = 0; i < 3; i++){
        cout << "Digite o valor: " << i << endl;
        cin >> a[i];
    }
}

void imprimir(int b[]) {
    int i = 0;
    for(i = 0; i < 3; i++){
        cout << "Numero = " << i << endl << (2 * b[i]) << endl;
    }
}
int main(){
    int numeros[3];
    cout << "Preenchendo o vetor... " << endl;
    inserir(numeros);
    cout << "Dobro dos valores informados:" << endl;
    imprimir(numeros);
	return 0;
}