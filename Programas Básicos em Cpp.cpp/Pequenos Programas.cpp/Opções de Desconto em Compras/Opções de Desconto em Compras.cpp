#include <iostream>
#include <stdio.h>

//Opções de desconto em Compras

using namespace std;

int main() {
	char x;
	float valor,desc, total;
	
	cout << "\n Digite o valor da compra \n";
	cin >> valor;
	cout << "\n Digite a letra que representa o seu desconto de acordo com a cor\n";
	cout << "a. azul\n";
	cout << "v. vermelho\n";
	cout << "b. branco\n";
	cout << " Digite sua opcao:";
	cin >> x;
	
	switch(x)
	{
	case 'a':
		cout << "Voce escolheu azul, seu desconto sera de 30 por cento \n";
		desc=valor*0.30;
		total=valor-desc;
		cout << "O valor da sua compra e\n" << total;
		break;
	case 'v':
		cout << "Voce escolheu vermelho, seu desconto sera de 20 por cento \n";
		desc=valor*0.20;
		total=valor-desc;
		cout << "O valor da sua compra e \n" << total;
		break;
	case 'b':
		cout << "Voce escolheu branco, seu desconto sera de 10 por cento \n";
		desc=valor*0.10;
		total=valor-desc;
		cout << "O valor da sua compra e\n" << total;
		break;
	default:
		cout << "opcao invalida\n";
	}	
	return 0;
}