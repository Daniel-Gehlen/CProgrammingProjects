#include <iostream>
#include <string.h>
#include <windows.h>

// Escolha o Sorvete

using namespace std;

int main() {
	int i;
	
	do{
		cout << "\n Digite o numero do seu sabor \n";
		
		cout << "\t (1) ...flocos \n";
		cout << "\t (2) ...morango \n";
		cout << "\t (3) ...chocolate \n";
		cin >> i;
	}while((i < 1) || (i > 3));
	
	switch(i){
		case 1:
			cout << "\t\t voce escolheu flocos";
			break;
		
		case 2:
			cout << "\t\t voce escolheu morango";
			break;	
		
		case 3:
			cout << "\t\t voce escolheu chocolate";
			break;
	}
		
	return 0;
}