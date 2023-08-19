#include <iostream>

// Cálculo damédia entre três idades em c++

using namespace std;

int main() 
{
	float idade1, idade2, idade3, media;
	cout << "Insira 3 idades: ";
	cin >> idade1 >> idade2 >> idade3;
	media = (idade1 + idade2 + idade3) / 3;
	cout << "Media = " << media;
	
	return 0;
}