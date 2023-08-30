#include <iostream>
#include <string.h>

// Calcular a Maioridade

using namespace std;

int main() {
	float idade;
	
	cout << "Digite a sua idade: ";
	cin >> idade;
	
	if (idade >= 18) 
	{
	cout << "Voce e maior de idade ";
	}
	
	else
	{		
	cout << "Voce e menor de idade ";
	}
	
	return 0;
}