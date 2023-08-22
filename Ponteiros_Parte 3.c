int main(void){

    int x = 10; 
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("Endereco x = %i - Valor x = %i\n", pX, *pX); // Estou dizendo que o endereço de x é = a %i, quem ocupa esse %i é pX.
    printf("Endereco y = %i - Valor y = %f\n", pY, *pY); // Depois digo, o valor de x está em %i. Quem ocupa esse %i é &pX.
    printf("Endereco z = %i - Valor z = %c\n", pZ, *pZ);

    double soma = *pX + *pY;
    printf(" Valor da soma de x e y e = %f\n", soma);

    int *resultado;
    resultado = 6422276; //Inclui o endereço da memória manualmente
    printf("Valor do Endereco x = %i\n", resultado); // Sem o * ele aponta para o endereço

    int *resultado2;
    resultado2 = 6422256; //Inclui o endereço da memória de y manualmente
    printf("Valor de y = %f\n", *resultado2); // Com * ele aponta para o valor

    getchar();              

    return 0;
}