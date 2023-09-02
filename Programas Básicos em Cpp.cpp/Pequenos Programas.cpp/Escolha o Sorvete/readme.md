``` mermaid
graph TD
    A[Início] --> B[Início do laço do-while]
    B --> |Imprimir opções de sabor| C[Entrada do usuário]
    C --> D[Testar a entrada do usuário]
    D --> |--i < 1-- ou --i > 3--| B[Repetir o laço]
    D --> |--i >= 1-- e --i <= 3--| E[Executar switch]
    E --> |i = 1| F[Imprimir escolha de flocos]
    E --> |i = 2| G[Imprimir escolha de morango]
    E --> |i = 3| H[Imprimir escolha de chocolate]
    F --> I[Fim]
    G --> I
    H --> I
    I[Fim]
```