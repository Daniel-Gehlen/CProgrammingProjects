int main(void){

    struct horario{
        int hora;
        int minutos;
        int segundos;
    };
    
    struct horario agora, *depois; // Uma variável do tipo agora e um ponteiro que aponta para struct horário
    depois = &agora; //Dizer que depois é igual ao endereço de agora

    //printf("%i : %i : %i:", agora.hora, agora.minutos, agora.segundos);

    //(*depois).hora = 20; // Tenho que colocar entre parêntese o que eu quero que o computador leia depois. No caso o ponteiro 
    //(*depois).minutos = 20; // Jogo o ponteiro entre parênteses e altero o membro que quiser
    //(*depois).segundos = 20; //Essa é uma maneira de acessar o ponteiro no tipo struct
    
    depois->hora = 20; // Essa é outra maneira de associar o ponteiro ao membro
    depois->minutos = 40; // Essa maneira é mais utilizada entre programadores em C
    depois->segundos = 50;
    
    printf("%i : %i : %i:", agora.hora, agora.minutos, agora.segundos);

    int somatorio = 100; //Vamos incluir uma função

    struct horario antes; //Crio outro estruct para smar os valores anteriores
    
    antes.hora = somatorio + depois->segundos; // Quero somar ao somatorio 100 buscaando esse valor depois->segundos = 20; somar ao somatorio 100 
    antes.minutos = agora.hora + depois->minutos; // Quero dizer para somar o struct agora.hora + *depois.minuto: 20 + 40
    antes.segundos = depois->minutos + depois->segundos; // A soma de dois membro: o ponteiro q tá apontando p/ struct horário somando 50 + 40 através dos poteiros.

    printf("\n%i : %i : %i:", antes.hora, antes.minutos, antes.segundos); // Mudo para o struct atual

    // Podemos utilizar outros operadores além de +, como -, *, /.

    getchar();

    return 0;
    
}