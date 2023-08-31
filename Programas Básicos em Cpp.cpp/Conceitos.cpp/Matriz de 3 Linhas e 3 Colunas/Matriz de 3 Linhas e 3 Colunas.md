``` mermaid
graph TD
    A[Início] --> B[Declaração de variáveis]
    B --> C[Loop: Para cada linha]
    C --> D[Loop: Para cada coluna]
    D --> E[Imprimir prompt para digitar valor]
    E --> F[Capturar valor e armazenar na matriz]
    F --> D
    D --> G[Finalizar loop de coluna]
    G --> C
    C --> H[Imprimir matriz]
    H --> I[Loop: Para cada linha]
    I --> J[Loop: Para cada coluna]
    J --> K[Imprimir valor da matriz]
    K --> J
    J --> L[Nova linha]
    L --> I
    I --> M[Finalizar loop de linha]
    M --> N[Fim]
    N --> O[Pausa do sistema]

```