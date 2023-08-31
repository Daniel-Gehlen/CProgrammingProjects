``` mermaid
graph TD
    subgraph Inicialização
        A[Declaração da FILA] --> B[Alocar Memória]
        B --> C[Inicialização da FILA]
    end

    subgraph Enfileirar Elementos
        D[enfileira--10--] --> E[Adicionar nó 10]
        E --> F[Ajustar ini e fim]
        F --> G[enfileira--20--] --> H[Adicionar nó 20]
        H --> I[Ajustar ini e fim]
        I --> J[enfileira--30--] --> K[Adicionar nó 30]
        K --> L[Ajustar ini e fim]
    end

    subgraph Imprimir FILA
        M[imprimeFila] --> N[Imprimir elementos]
    end

    M --> P[Liberar Memória]

```