#include <iostream>
#include <string.h>

// Matriz de 3 Linhas e 3 Colunas

using namespace std;

int main() {
	
 int linha,coluna;
 int matriz[3][3];
     for (linha=0; linha<3; linha++)
 {
     for (coluna=0; coluna<3;coluna++)
 {
     cout << "Digitar os valores da matriz para: linha, coluna:  ",linha+1,coluna+1;
     cin >> matriz[linha][coluna];
 }
 }
     cout << "Veja a sua Matriz\n";
     for (linha=0;linha<=2;linha++)
 {
     for (coluna=0;coluna<3;coluna++)
       cout << matriz[linha][coluna] << " ";
        cout << endl;
 }
 system("pause");
 
	return 0;
    }