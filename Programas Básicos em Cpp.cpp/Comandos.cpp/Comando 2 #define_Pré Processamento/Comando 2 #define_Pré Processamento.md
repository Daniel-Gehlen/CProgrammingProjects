``` mermaid
graph TD
    A[Início] --> B[Ler i]
    B --> C[Condição: i != NULO?]
    C --> |Sim| D[Ler raio]
    D --> E[Chamar função areaCirculo--raio--]
    E --> F[Mostrar área do círculo]
    F --> G[Decrementar i]
    C --> |Não| H[Finalizar]
    G --> B
    H --> I[Fim]
```