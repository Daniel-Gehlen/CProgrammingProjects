int main(void){

    void testVariavel (int x); //Iniciamos com duas funções
    void testPonteiro (int *pX);
    int teste = 1; //Criamos uma função do tipo inteira q contémvalor de 1
    int *pTeste = &teste; // Criamos um ponteiro q aponta p/ variável teste

    testeVariavel(teste); //Aqui eu chamo a função lá embaixo e adiciona 1 a variaável teste. Aqui o valor não é alterado porque a função lá embaixo está criando outro endereço, outra variável teste. Uma independente daoutra 
    testePonteiro(pTeste); // Aqui chamo a função lá embaixo e escevo sem asterísco para mostrar o endereço, com* mostraria o valor. Aqui o valor é alteado.

    printf("%i\n", teste); // Aqui printamos o valor da variável teste
    
    
    getchar();

    return 0;
}

void testeVariavel (int x){ //Duas funções do tipo void, isto ´s, não retornam nada.
    ++x; // A função recebe como argumento uma variável inteira. O trabalho da função é adicionar a variável x (++x).

    printf("%i\n", x); //Se colocar o print aqui, aí muda o valor dessa função. Aparecem dois num diferentes porque essa variável é uma cópia.
                        //Mas a utra lá em cima permanece 1
}

void testePonteiro (int *pX){ //Duas funções do tipo void, isto ´s, não retornam nada.
    ++*pX; // Essa função recebe o endereço de memória e adicionado 1 ao valor desse ponteiro (++*pX)
}           // Quando chamo a função testePonteiro, não existe uma cópia. Estou passando o endereço de memória da variável teste lá em cima.
                // Estou dizendo adicione 1 aquele endereço de memória, indo direto na fonte. Qunado dou o printf, mostra o valo 2

// Isso mostra que passar um ponteiro elimina te que chamar a função toda hora. Isso em projetos grandes resolve muito problema de espaço.
