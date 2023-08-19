#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() 
{
		float salario, inss, ir, sal_liquido;
	
	cout << "Digite seu salario bruto: ";
	cin >> salario;
	
	if (salario <= 1993.72) 
    {
		inss = salario * 0.08;
	}
    else if (salario >= 1993.73 && salario <= 2822.50) 
    {
		inss = salario * 0.09;
	}
	sal_liquido = (salario - inss) - ir;
	
	cout << "\n Desconto INSS\n" << inss;
	
	cout << "\n Salario liquido\n" << sal_liquido;
	
	return 0;
}