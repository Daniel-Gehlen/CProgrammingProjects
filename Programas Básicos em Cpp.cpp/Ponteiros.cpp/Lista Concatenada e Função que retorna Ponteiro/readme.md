``` mermaid
graph TD
    A[Início] --> B[Declaração da estrutura lista]
    B --> C[Declaração da função procurarValor]
    C --> D[Atribuição de valores aos membros da lista m1, m2 e m3]
    D --> E[Atribuição dos ponteiros próximos]
    E --> F[Leitura do valor de pesquisa]
    F --> G[Chamada da função procurarValor]
    G --> H[Execução do ciclo while]
    H --> I[Condição: pLista não é nulo?]
    I --> J[Verificação se valor é igual]
    J --> K[Retorno do endereço de memória ou atualização do ponteiro]
    K --> I
    I --> L[Retorno nulo]
    G --> M[Verificação do resultado]
    M --> N[Resultado é nulo?]
    N --> O[Impressão de --Valor não encontrado--]
    N --> P[Impressão do valor encontrado]
    P --> Q[Fim]
    O --> Q[Fim]
    Q --> R[Pausa do sistema]

```