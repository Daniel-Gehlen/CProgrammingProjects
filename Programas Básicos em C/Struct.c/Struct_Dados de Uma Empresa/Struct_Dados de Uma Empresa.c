typedef struct local{ //Struct local tem que vir antes porque vou usar a Local dentro dentro de empresa
    char cidade[36];
    char estado[36];
}local;

typedef struct empresa{
    char nome[36];
    char cnpj[16];
    local end;
}empresa; 


int main(){
    empresa emp;

    printf("Nome :");
    scanf("%s", emp.nome);
    printf("CNPJ :");
    scanf("%s", emp.cnpj);

    printf("Local :");
    scanf("%s", emp.end.cidade);
    printf("Estado :");
    scanf("%s", emp.end.estado);

    printf("\nNome : %s\n", emp.nome);
    printf("CNPJ : %s\n", emp.cnpj);
    printf("Local : %s\n", emp.end.cidade);
    printf("Estado : %s\n", emp.end.estado);
 
    return 0;
}
