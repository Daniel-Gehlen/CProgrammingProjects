// Contagem Regressiva -1

int main() {
	int contador;
	
	printf("Digite um valor:");
	scanf("%d", &contador);
	
	for(contador; contador >= 1; contador--)
	{
		printf("%d ", contador);
	}
	
	return 0;
}