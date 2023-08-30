int main(void){

    struct lista{
        int valor;
        struct lista *proximo; //Tenho um ponteiro chamado proximo q/ aponta p/ uma estruc lista. Vou passar p/ ele um endereço de uma outra estruct lista.  
    };

    struct lista m1, m2, m3; //m, abreviação de membro
    struct lista *gancho = &m1; // a vaiável ponteiro gancho apontando p/ endereço de m1

    m1.valor = 10; // Agora atribuo valores para os membros da lista
    m2.valor = 20; // o membro valor aqui é igual a 20
    m3.valor = 30;

    // Feita a variável lista
    // Agora tenho q especificar onde q meu ponteiro *proximo vai apontar

    m1.proximo = &m2; // Aqui q vem o conceito de lista
    m2.proximo = &m3;
    m3.proximo =  (struct lista *)0; // Aponta para nulo poque não tem outro membro. Aqui ele fecha a lista
    
    //Agora como acessar os membros da lista em uma ordem?
    
    while (gancho != (struct lista *)0) // Digo que enquanto não apontar para uma estrutura nula, quero que seja executado o ciclo. Essa é a condição aqui.
    {
        printf("%i\n", gancho->valor); // A ação é printar a variável valor a cada repetição do ciclo acessando com um ponteiro.
        gancho = gancho->proximo;
    }
    
    getchar();

    return 0;
}