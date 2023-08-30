#include <iostream>
#include <string.h>

using namespace std;


struct lista{ //Fora da função principal porque essa estruc será usada por mais funções.
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor){ //Essa função retorna um endereço de memória do tipo struct lista

    while(pLista != (struct lista *) 0){ //Um ciclo while que vai passar membro por membro atualizando o valor
        if(pLista->valor == valor){ //Se o valor de pLista for igual ao que o usuário digitou quer dizer q/ encontramos o valor q/ usuário pesquisava.
            return(pLista); //Se isso acontecer vou retornar o pLista
        } else {
            pLista = pLista->proximo; //Senão ele vai apontar para o proximo. O ciclo executa de novo e analisa a mesma coisa, mas com proximo membro da lista até o final.
        }
    }
    return(struct lista *) 0; // Se ele não achar depois de tudo, retorna nulo.

}
int main(void){

    struct lista *procurarValor(struct lista *pLista, int valor); //Primeiro de tudo, declarar a mesma função global na função principal
    struct lista m1, m2, m3; //Vou criar uma lista com 3 membros q fazem parte da lista concatenada
    struct lista *resultado, *gancho = &m1; //Criei mais dois ponteiros do tipo struct lista. O ponteiro *gancho aponta para o 1º membro da lista.
    int valor; // Criar uma variável valor para o print lá em baixo
//Agora tenho q dar os valores para os membros

    m1.valor = 5;
    m2.valor = 10;
    m3.valor = 15;

//Agora tenho q fazer a lista m1 apontar m2, m2 apontar m3. m3 apontar para struc nula

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;

// Jogo uma mensagem para o usuário

    cout << endl << "Digite o valor da pesquisa :";
    cin >> valor; // Fornece o valor a ser pesquisado

    resultado = procurarValor(gancho, valor); //Variavel q o usuário digitou e o gancho da lista

    if(resultado == (struct lista *)0){
        cout << endl << "Valor nao encontrado.";
    } else{
        cout << endl << "Valor" << " " << resultado->valor << " " << "encontrado."; //resultado->valor é quem ocupa o %i
    }
    
    getchar();

    return 0;
}