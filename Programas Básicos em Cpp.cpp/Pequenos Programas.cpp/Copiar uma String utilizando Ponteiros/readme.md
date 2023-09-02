``` mermaid
graph TD
    A[Início] --> B[Declaração das strings]
    B --> C[Chamada da função copiarString]
    C --> |Parâmetros: string1, string2| D[Copiar caracteres da string1 para string2]
    D --> |CopiarDaqui != '\0'| E[Copiar caractere]
    E --> F[Avançar ponteiros]
    F --> D
    D --> |CopiarDaqui == '\0'| G[Adicionar caractere nulo]
    G --> H[Imprimir string2]
    H --> I[Terminar]
```