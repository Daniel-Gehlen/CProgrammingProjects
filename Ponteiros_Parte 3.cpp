#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void){

    int x = 10; 
    double y = 20.50;
    char z = 'a';
 
    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    cout << "Endereco x = " << pX << " " << "Valor x = " << *pX << endl; // Estou dizendo que o endereço de x é = a %i, quem ocupa esse %i é pX.
    cout << "Endereco y = " << pY << " " << "Valor y = " << *pY << endl; // Depois digo, o valor de x está em %i. Quem ocupa esse %i é &pX.
    cout << "Endereco z = " << pZ << " " << "Valor z = " << *pZ << endl;

    double soma = *pX + *pY;
    cout << " Valor da soma de x e y e = " << soma << endl;

    int *resultado;

    resultado = &x; //Inclui o endereço da memória manualmente
    cout << "Valor do Endereco x = " << resultado << endl; // Sem o * ele aponta para o endereço

    double *r0x61fee0; // Colocar a mesma variável que está no escopo inicial e o ponteiro no endereço
;
    r0x61fee0 = &y; //Inclui o endereço da memória manualmente
    cout << "Valor do Endereco  = " << *r0x61fee0 << endl; // Sem o * ele aponta para o endereço


    return 0;
}