#define SIM 100 //Como definimos o conjunto de caracteres SIM como 100, quando ele encontra esse conjunto de caracteres, ele substitui pelo valor.
#define NA0 -100 //Isso acontece antes do programa ser executado. Por isso, pré-processamento.
                    //Esse programa é inútil, mas serve para sabermos que o comand #define serve para o pré processamento.

int main(){

    int x;
    printf("Digite um numero inteiro:");
    scanf("%i", &x);

    if(x <= 10){
        printf("%i", NA0);

    } else {
        printf("%i", SIM);
    }

    getchar();

    return 0;
}