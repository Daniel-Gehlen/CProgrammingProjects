#include <iostream>
#include <string.h>

// Contagem Regressiva -1

using namespace std;

int main() {
	int contador;
	
	cout << "Digite um valor:";
	cin >> contador;
	
	for(contador; contador >= 1; contador--)
	{
		cout << " " << contador;
	}
	
	return 0;
}