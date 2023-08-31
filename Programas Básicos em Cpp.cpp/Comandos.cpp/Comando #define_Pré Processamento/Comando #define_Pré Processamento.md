``` mermaid
graph TD
    A[Início] --> B[Ler x]
    B --> C[Condição: x <= 10?]
    C --> |Sim| D[Mostrar NA0]
    C --> |Não| E[Mostrar SIM]
    D --> F[Fim]
    E --> F
    F --> G[Fim]
```