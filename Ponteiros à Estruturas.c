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
    depois->minutos = 20; // Essa maneira é mais utilizada entre programadores em C
    depois->segundos = 20;
    
    printf("%i : %i : %i:", agora.hora, agora.minutos, agora.segundos);

    getchar();

    return 0;
    
}