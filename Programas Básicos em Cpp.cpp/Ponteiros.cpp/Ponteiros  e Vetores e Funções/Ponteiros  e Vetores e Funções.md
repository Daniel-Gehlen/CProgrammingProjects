``` mermaid
graph TD
    A[Início] --> B[Declaração de função somarVetor]
    B --> C[Declaração do vetor e chamada da função]
    C --> D[Criação de variáveis dentro de somarVetor]
    D --> E[Criação de ponteiro e constante finalVetor]
    E --> F[Ciclo for para percorrer o vetor]
    F --> G[Soma dos valores do vetor]
    G --> F
    F --> H[Retorno do valor da soma]
    C --> I[Impressão do resultado da função]
    I --> J[Fim]

```