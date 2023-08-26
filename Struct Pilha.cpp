#include <iostream>
#include <string.h>

using namespace std;

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct PILHA{
    NO *topo;
}PILHA;

void inicializaPilha(PILHA *p){
    p->topo = 0;
}

void empilha(int dado, PILHA *p){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr == 0){
        printf("ERRO de alocacao de no\n");
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = p->topo;
        p->topo = ptr;
    }
}

int desempilha(PILHA *p){
    NO *ptr = p->topo;
    int dado;
    if(ptr == 0){
        cout << "Pilha vazia" << endl;
        return 0;
    }else{
       p->topo = ptr->prox; 
       ptr->prox = 0;
       dado = ptr->dado;
       free(ptr);
       return dado;
    }
}

void imprimePilha(PILHA *p){
    NO *ptr = p->topo;
    if(ptr == 0){
        cout << "Pilha vazia" << endl;
        return;
    }else{
        while(ptr != 0){
            cout << ptr->dado;
            ptr = ptr->prox;
            printf("\n"); //Aqui colocar printf("\n") para quebra de linha dos membros da pilha
        }
    }
}

int main(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
    if(p1 == 0){
        cout << "ERRO de alocacao da pilha." << endl;
        exit(0);
    }else{
        inicializaPilha(p1);
     
        empilha(10, p1);
        empilha(20, p1);
        empilha(30, p1);
   
        imprimePilha(p1);

        cout << endl << "Tentando desempilhar - resultado: "<< desempilha(p1) << endl;
        imprimePilha(p1);
        cout << endl << "Tentando desempilhar - resultado: " << desempilha(p1) << endl;
        imprimePilha(p1);
        cout << endl << "Tentando desempilhar - resultado: " << desempilha(p1) << endl;
        imprimePilha(p1);
    }
}