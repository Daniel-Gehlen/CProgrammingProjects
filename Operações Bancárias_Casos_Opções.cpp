#include <iostream>
#include <stdio.h>

//Operações Bancárias

using namespace std;

int main() {

float soma = 0; 
float valor; 
int opcao;

do {
cout << " Digite uma Operacao" << endl;
cout << " 1. Deposito" << endl; 
cout << " 2. Saque" << endl; 
cout << " 3. Saldo" << endl; 
cout << " 4. Sair" << endl; 
cout << " Opcao? " << endl; 
cin >> opcao;

switch(opcao) {
     case 1: cout << "Valor do deposito? " << endl; 
             cin >> valor; 
             soma = (soma + valor); 
             break;
     case 2: cout << "Valor do saque? " << endl; 
             cin >> valor; 
             soma = (soma - valor); 
             break;
     case 3: cout << "Saldo atual = R$ " << soma  << endl; 
             break; 
     default: if(opcao != 4)
cout << endl << "Opcao Invalida!" << endl; 
}   
}    
while (opcao != 4); 
     cout << "Fim das operacoes." << endl; 
     system("pause");
     
	return 0;
}