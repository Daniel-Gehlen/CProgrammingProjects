// Informe as Medidas para obter um Triângulo

int main() {
	int a, b, c;
printf("Classificacao do triangulo: informe a medida dos lados apertando a Tecla ENTER para cada medida:\n");
scanf("%d %d %d", &a, &b, &c);
if (a< b + c && b< a +c && c < a + b)
	{ 
		printf("\n\n Dadas as medidas: %d, %d, %d, temos um triangulo\n", a, b, c);
		if( a == b && a == c)
		{
		printf("\n Este e um triangulo EQUIILATERO! \n");
		}
			else
				if ( a==b || a == c || b ==c)
				{
				printf("Este e um triangulo ISOSCELES!\n");
				}
					else
					printf("Este e um triangulo ESCALENO! \n");
	}
		else
		printf("\n\n As medidas fornecidas, %d,%d,%d nao formam um triangulo\n", a, b, c);
		
	return 0;
}