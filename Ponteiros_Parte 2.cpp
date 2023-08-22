#include <iostream>
#include <string.h>

using namespace std;

int main(void){

    int x = 10; 
    int *ponteiro; // Um ponteiro que está apontando para um inteiro
    ponteiro = &x; // Aqui ele aponta para o endereço "&" da variável x
    
    int y = 20; // Cria uma variável y com valor de 20
    *ponteiro = y; // o * diz que o valor do ponteiro será igual ao valor de y.

    cout << x << endl << y; // Se der um printf, o que vai acontecer? Será 20 e 20
                                // Porque esse ponteiro apontou para o endereço de memória de x
                                // e falou que aquele valor será igual ao valor de y
    getchar();              //Utilizando ponteiros, vamos na fonte, no endereço de memória

    return 0;
}