#include <iostream>
#include <string.h>

// Informe as medidas para obter um Triângulo

using namespace std;

int main() {
	int a, b, c;
cout << "Classificacao do triangulo: informe a medida dos lados apertando a Tecla ENTER para cada medida:\n";
cin >> a >> b >> c;
if (a< b + c && b< a +c && c < a + b)
	{ 
		cout << "\n Dadas as medidas:" << a  << " " << b << " " << c << " "<< "temos um triangulo\n" << " ";
		if( a == b && a == c)
		{
		cout << "\n Este e um triangulo EQUIILATERO! \n";
		}
			else
				if ( a==b || a == c || b ==c)
				{
				cout << "Este e um triangulo ISOSCELES!\n";
				}
					else
					cout << "Este e um triangulo ESCALENO! \n";
	}
		else
		cout << "\n\n As medidas fornecidas," << a << " " << b << " " << c << " " << "nao formam um triangulo\n" << " ";
		
	return 0;
}