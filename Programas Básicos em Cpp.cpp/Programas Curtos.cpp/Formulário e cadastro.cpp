#include <iostream>
#include <string.h>
// Fromulário de Cadastro

using namespace std;

int main() 
{   
	char nome[30], endereco[30];
	int idade;
	
	cout << "nome ";
	cin >> nome;
	
	cout << "endereco ";
	cin >> endereco;
	
	cout << "idade ";
	cin >> idade;

    cout << "Formulario " << endl << nome << endl << endereco << endl << idade << endl;

	return 0;
}