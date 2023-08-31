#include <iostream>
#include <string.h>

using namespace std;

typedef struct local{ //Struct local tem que vir antes porque vou usar a Local dentro dentro de empresa
    char cidade[36];
    char estado[36];
}local;

typedef struct empresa{
    char nome[36];
    char cnpj[16];
    local end;
}empresa; 


int main(){
    empresa emp;

    cout << "Nome :";
    cin >> emp.nome;
    cout << "CNPJ :";
    cin >> emp.cnpj;

    cout << "Local :";
    cin >> emp.end.cidade;
    cout << "Estado :";
    cin >> emp.end.estado;

    cout << endl << "Nome : " << emp.nome << endl ;
    cout << "CNPJ : " << emp.cnpj << endl ;
    cout << "Local : " << emp.end.cidade << endl ;
    cout << "Estado : " << emp.end.estado << endl ;
 
    return 0;
}