int main(void){

    struct horario{ // Definindo a astruct com o nome que quiser
        int *pHora; // Dentro da estruc vou informar os ponteiros
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje; // Tenho que declarar uma variável do tipo de estruc acima
    
    int hora = 200;       // Os ponteiros precisam apontar para algum lugar na memória. Precisaremos de três variáveis para onde eles vão apontar.
    int minuto = 300;
    int segundo = 500;

    hoje.pHora = &hora; // Esse ponteiro aponta para o endereço da variável hora
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("\nHora - %i", *hoje.pHora); // * para acessar os valores daqueles ponteiros 
    printf("\nMinuto - %i", *hoje.pMinuto);
    printf("\nSegundo - %i", *hoje.pSegundo);

    *hoje.pSegundo = 1000; // Se quiser alterar e printar novo valor

    printf("\nSegundo - %i", *hoje.pSegundo);

    getchar();

    return 0;
}