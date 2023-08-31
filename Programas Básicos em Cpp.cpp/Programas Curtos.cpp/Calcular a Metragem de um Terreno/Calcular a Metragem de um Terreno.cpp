#include <iostream>
#include <string.h>

//Calcular a Metragem de Um Terreno

using namespace std;

int main() {
	float metragem1,metragem2,resultado;
	int resp;
metragem1 = 0;
metragem2 = 0;
resultado = 0;
  do
  {
    cout << "C A L C U L O    D E   M E T R O S    Q U A D R A D O S";
    cout << "\n \n Digite a primeira metragem do terreno: \n";
    cin >> metragem1;
    cout << "\n Digite a segunda metragem do terreno: \n";
     cin >> metragem2;
    resultado = (metragem1 * metragem2);
    cout << "\n \n O Terreno tem " << " " << resultado << " " << "metros quadrados" << endl;
    cout << "Digite 1 para continuar ou 2 para sair\n";
     cin >> resp;
  }
  while (resp==1);
  
	return 0;
}