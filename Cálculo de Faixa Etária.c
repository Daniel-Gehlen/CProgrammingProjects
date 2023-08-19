// Cálculo damédia entre três idades em c.

int main(int argc, char** argv) {
	int idade1;
	int idade2;
	int idade3;
	int media;
	
	printf("Insira idade 1: \n");
	scanf("%d", &idade1);
	
	printf("Insira idade 2: \n");
	scanf("%d", &idade2);
	
	printf("Insira idade 1: \n");
	scanf("%d", &idade3);
	
	media = (idade1 + idade2 + idade3) / 3;
	printf("media = %d", media);
	
	return 0;
}