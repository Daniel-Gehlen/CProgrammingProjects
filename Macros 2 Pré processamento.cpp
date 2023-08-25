#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;


#define MAIOR(x, y) x > y ? x : y //Antes, passamos um valor em cada #define. Agora, vamos passar dois valores
                                  // Esse ? é como se utiliza um operador cndicional. Estou dizendo x > y caso sim ? retorna x, caso não : retorna y
#define E_MINUSCULO(char) char >= 'a' && char <= 'z' //Uma comparação na macro q retorna verdadeiro ou falso

//Feitas as macros, vamos fazer um programa para testar isso tudo

int main(void){

    char x = 'a';

    if(E_MINUSCULO(x)){ // Dentro desse if vou chamar o E da minha macro e entre parenteses vou jogar a variável char q é a variável x
                        //Quando passar aqui, a expressão da macro vai ser resolvida considerando o valor de x q é "a"
        cout << endl << x << endl << "E uma letra minuscula" << endl ; // Caso seja verdadeiro  
    }else{
        cout << endl << x << endl <<"Nao e uma letra minuscula" << endl ; // Caso não seja verdade
    }

        cout << (MAIOR(10, 50)) << endl; // Para pegar os valores da macro MAIOR tem que colocara MACRO entre parênteses

    system("Pause");
    return 0;
}