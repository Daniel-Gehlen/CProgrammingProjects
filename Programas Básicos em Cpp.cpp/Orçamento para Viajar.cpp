#include <iostream>
#include <stdio.h>

//Orçamento para viajar

using namespace std;

int main() {

float orcamento;

cout << " Digite o valor do orcamento para viagem: ";
cin >> orcamento;

if (orcamento >= 10000) 
{
	cout << " Joao e Maria possuem orcamento para uma viagem internacional, pois seu orcamento e de 200" << orcamento;
}	

else
{
    cout << "\n Joao e Maria irao optar por uma viagem nacional, seu orcamento ficou em " << orcamento;
}
	return 0;
}