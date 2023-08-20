//Crie um algoritmo que leia um vetor com os dados de 5 carros, ano e preço:
// Leia um valor p e mostre as informações de todos com preço menor que p. */

typedef struct carro{
    char marca[36];
    int ano;
    float preco;
}carro;

int main(){
    int N = 3, i;
    carro car[N];
    float p;

    for(i = 0; i < N; i++){ //for para fazer todo processo de repetição do vetor
        printf("Marca: ");
        scanf("%s", car[i].marca); // Indices do vetor[i] como car está com o vetor, colocamos em cada um.
        printf("Ano: ");           // Assim, ele vai ler o valor de cada um e passar para o vetor.
        scanf("%d", &car[i].ano);   // O struct vai armazenar os dados nesse vetor com esse processo.
        printf("Preço: ");
        scanf("%f", &car[i].preco);
    }

    printf("Valor de p: ");
    scanf("%f", &p);

    for(i = 0; i < N; i++) // Outro for para exibir os dados
    {  
        if (car[i].preco < p) 
        {
            printf("\nMarca: %s\n", car[i].marca); // Temos de por os indices do vetor porque o compilador já entende que a struct é um vetor.
            printf("Ano: %d\n", car[i].ano);
            printf("Preço: RS %.2f\n", car[i].preco);
        } 
    }

    return 0;
}