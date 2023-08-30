//Calcular a Potenciação

int main() {
    
    double base, pot;
    int expoente, n;
    char novamente;
    
    printf("Bem-vindo(a) a calculadora (totalmente nao otimizada) de potenciacao!\n");
    
    do{
        printf("Entre com a base: ");
        scanf("%lf", &base);
        printf("Entre com o expoente: ");
        scanf("%d", &expoente);
        n = 0;
        pot = base;
        //3 casos: expoente = 0, < 0 e > 0, nesses 2 últimos podendo ser = 1 ou = -1
        if (expoente == 0){
            //Qualquer número elevado a 0 é 1
            printf("O resultado da potenciacao e: 1");
        }
        else
            if (expoente > 0){
                //Fazer pot * base o tanto de vezes que corresponde ao expoente
                do {
                    pot = pot * base;
                    n += 1;
                } while(n + 1 < expoente);
                
                if (expoente == 1){
                    //Qualquer número elevado a 1 é ele mesmo
                    printf("O resultado da potenciacao e: %.4lf", base);
                }
                else {
                    printf("O resultado da potenciacao e: %.4lf", pot);
                }
            }
            else
                if (expoente < 0){
                    //Mesma mecânica para expoente > 0, mas inverte-se pot no final
                    expoente = -expoente;
                    do {
                        pot = pot * base;
                        n += 1;
                    } while(n + 1 < expoente);
                    
                    if (expoente == 1){
                        //Qualquer número elevado a -1 é 1/ele mesmo
                        printf("O resultado da potenciacao e: %.4lf", 1/base);
                    }
                    else {
                        printf("O resultado da potenciacao e: %.4lf", 1/pot);
                    }
                }
        printf("\n\nQuer calcular novamente (s/n)? ");
        scanf("%s", &novamente); //Teste para calcular novamente
    } while (novamente == 's');
    
    return 0;
}