#define PI 3.14159
#define DOIS_PI 2 * PI //Aqui utilizei o PI novamente
#define AREA_CIRCULO(raio) raio * raio * PI //Escrevo a macro em letras maiúsculas e entre parenteses informo os valores que quero passar p essa macro.
                                            // Aqui to dizendo q a AREA_CIRCULO recebendo o valor de raio é igual a raio * raio * PI
int main(){
    printf("%f\n", PI);
    printf("%f\n", DOIS_PI);
    printf("%f\n", AREA_CIRCULO(10)); //Paço o valor para a macro (raio) com o qual fará a operação

    getchar();

    return 0;

}
