void copiarString(char *copiarDaqui, char *colarAqui){

    while(*copiarDaqui != '\0'){ //Enquanto meu ponteiro for diferente de um caractere nulo (o último caractere sempre é nulo em string), quero q o ciclo siga sendo executado.
        *colarAqui = *copiarDaqui; //A cada ciclo executado o 1º caract de colarAqui será igual ao 1º caract de copiarDaqui
                                    //Agora tenho que informar para o ciclo while para passar ao 2º caract adicionando ++
        ++copiarDaqui; //Todizendo copiarDaqui vai para o 2º membro
        ++colarAqui;   //Todizendo colarAqui vai para o 2º membro
    }
    *colarAqui = '\0'; // tenho que informar o último caractere como nulo, senão a função imprime os caract nulos.
}                       //Assim informa que tem q imprimir até a última string escrita

int main(void){
    void copiarString(char *copiarDaqui, char *colarAqui);

    char string1[] = "Pom com mortadela";
    char string2[20];

    copiarString(string1, string2); // Aqui chamo a função copiarString e passo pra ela a string1 e a string2
    printf("\n%s", string2);            //Então, vamos fazer que ela copie caractere por caractere da string1 na string2
                                        // Printar a string2 que deve estar com os caracteres da string1
    getchar();

    return 0;
}