#define PI 3.14159 //É uma forma de personalizar o programa de forma que seja útil para nós
#define NULO 0      // Depende da forma de trabalhar da empresa porque as variáveis podem ser pré definidas aqui assim.

double areaCirculo(double raio){ //Essa função será responsável por calcular a área de um circulo recebendo o raio de determinado circulo
        return raio * raio * PI; //Aqui opré processamento vai substituir PI pelo valor em #define


}

int main(void){
    double areaCirculo(double raio); //1º de tudo declarar a função na main principal
    double r; //Variável onde será amrazenado o valor do raio
    int i = 3;

    while (i != NULO){
        printf("\nDigite o raio do circulo:");
        scanf("%lf", &r);
        printf("\n A area do circulo e %lf\n", areaCirculo(r));
        --i; // A cada vez q o ciclo for executado, diminuimos a variável i para não ficar infinitamente repetindo.
    }
    system("Pause");
    return 0;
}