// Temos várias operações diferentes. Para rodar cada, precisa tirar as barras duplas de comentério.

int main(void){
    int vetor[3] = {1, 2, 3};
    //int *ponteiro = vetor; // Se o meu ponteiro está apontando para um vetor de tamanho 3, não preciso especificar. Ele aponta simplesmente para um endereço de memória
                            // do 1º membro do vetor e não precisa do &

    //printf("%i", *ponteiro);

    // int *ponteiro = &vetor[0]; poderia forçar que ele aponte para um membro específico
    // printf("%i", ponteiro); se escrever sem *, ele mostra o endereço do 1º membro
    //printf("%p", *ponteiro); o %p é a maneira correta para mostrar o endereço de memória para onde o ponteiro está apontando
    
    //Aqui vamos printar os endereços de mem´ria de cada membro 

        //int *ponteiro = &vetor[0];
        //printf("%p\n", ponteiro);

        //ponteiro = &vetor[1];
        //printf("%p\n", ponteiro);

        //ponteiro = &vetor[2];
        //printf("%p\n", ponteiro);

    //Aqui vamos adicionar um encremento que faz com queele aponte para o proximo membro

        //int *ponteiro = &vetor[0];
        //++ponteiro; //Antes do printf. Vai mostrar o 2º membro
        //++ponteiro; // Vai mostrar o 3º membro
        //printf("%p\n", ponteiro);

    // Vamos alterar o valor de um vetor através de um ponteiro

        int *ponteiro = vetor;

        *(ponteiro +1) = 10; // com o *, digo que quero acessar o valor do endereço de memória especificado entre parênteses.

        printf("%i\n", vetor[1]); // então ele mostra o valor de 10 para esse vetor

    getchar();
    return 0;

}