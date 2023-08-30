#include <iostream>
#include <string.h>

using namespace std;

//#define N 100

#define NULL 0

typedef struct NO{
    int dado;
    struct NO *prox;
}NO;

typedef struct FILA{

NO *ini;
NO *fim;
}FILA;

void inicializaFila(FILA *f){
    f->ini = NULL;
    f->fim = NULL;
}

void enfileira(int dado, FILA *f){
    NO *ptr = (NO*) malloc(sizeof(NO));
    if(ptr == NULL){
        cout << "Erro de alocacao" << endl;
        return;
    }else{
        ptr->dado = dado;
        ptr->prox = NULL;
        if (f->ini == NULL){
            f->ini = ptr;
        }else{
            f->fim->prox = ptr;
        }
        f->fim = ptr;
        return;
    }
}

int desenfileira(FILA *f){
    NO *ptr = f->ini;
    int dado;
    if(ptr != NULL){
        f->ini = ptr->prox;
        ptr->prox = NULL;
        dado = ptr->dado;
        free(ptr);
        if(f->ini == NULL){
            f->fim = NULL;
        } 
        return dado;       
    }else{
        cout << "Fila vazia." << endl;
        return dado;
    }
}

void imprimeFila(FILA *f){
    NO *ptr = f->ini;
    if(ptr != NULL){
        while (ptr != NULL)
        {
           cout << ptr->dado;
           ptr = ptr->prox;
           cout << (" "); //Aqui q vai a quebra de linha
        }
    }else{
        cout << "Fila vazia.";
        return;
    }
}

int main(){
    FILA *f1 = (FILA*) malloc(sizeof(FILA));
    if(f1 == NULL){
        printf("Erro de alocacao\n");
        exit(-1);
    }else{
        inicializaFila(f1);
        
        enfileira(10, f1);
        enfileira(20, f1);
        enfileira(30, f1);

        imprimeFila(f1);
        
    }
}

//Fila* inicia_fila (void){

//    Fila* f =(Fila*) malloc(sizeof(Fila));
//    f -> n = 0;
//    f -> ini = 0;
//    return f;
//}

//void insere_fila(Fila* f, char elem){
//int fim;
//    if (f -> n == N) {
//	printf("A fila esta cheia.\n");
//	exit(1);
//    }

//    fim =(f -> ini + f -> n) % N;
//    f -> vet[fim] = elem;
//    f ->n++;
//}

//float remove_fila (Fila* f){
//	char elem;
//	if (fila_vazia(f)){
//		printf("A Fila esta vazia\n");
//		exit(1); 
//	}
//	elem = f -> vet[f -> ini];
//	f -> ini = (f -> ini + 1) % N;
//	f -> n--;
//	return elem;
//}

//void imprime_FILA(Fila* f){
//	char elem;
//	if (fila_vazia(f)){
//		printf("A Fila esta vazia\n");
//        return;
//    }else{
//        while(Fila* != 0){
//            printf("%d", Fila*->);
//            Fila* = Fila->N;
//        }
//        printf("\n");
//    }
//}

//int fila_vazia (Fila* f){
//	return (f -> n == 0);
//}

//void libera_fila(Fila* f){
//	free(f);
//}