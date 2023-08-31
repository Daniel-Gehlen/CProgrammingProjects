// Calcular a Maioridade

int main() {
	float idade;
	
	printf("Digite a sua idade: \n");
	scanf("%f", &idade);
	
	if (idade >= 18) 
	{
	printf("Voce e maior de idade \n", idade);
	}
	
	else
	{		
	printf("Voce e menor de idade \n", idade);
	}
	
	return 0;
}