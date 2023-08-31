``` mermaid
flowchart TD
    subgraph Inicialização
        A[Declaração da PILHA] --> B[Alocar Memória]
        B --> C[Inicialização da PILHA]
    end

    subgraph Empilhar Elementos
        D[empilha--10--] --> E[Criar nó 10]
        E --> F[Apontar topo para nó 10]
        F --> G[empilha--20--] --> H[Criar nó 20]
        H --> I[Apontar topo para nó 20]
        I --> J[empilha--30--] --> K[Criar nó 30]
        K --> L[Apontar topo para nó 30]
    end

    subgraph Imprimir PILHA
        M[imprimePilha] --> N[Imprimir elementos]
    end

    subgraph Desempilhar Elementos
        O[desempilha] --> P[Remover nó do topo]
    end

    A --> O

```