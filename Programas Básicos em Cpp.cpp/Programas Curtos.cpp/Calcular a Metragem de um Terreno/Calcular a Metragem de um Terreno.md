``` mermaid
graph TD
    A[Início] --> B[Inicializar metragem1, metragem2 e resultado]
    B --> C[Iniciar loop do-while]
    C --> D[Imprimir cabeçalho]
    D --> E[Ler a primeira metragem]
    E --> F[Ler a segunda metragem]
    F --> G[Calcular resultado --metragem1 * metragem2--]
    G --> H[Imprimir resultado]
    H --> I[Ler resposta --1 para continuar, 2 para sair--]
    I --> |resp==1| C[Continuar o loop]
    I --> |resp!=1| J[Encerrar o loop]
    J --> K[Fim]
```