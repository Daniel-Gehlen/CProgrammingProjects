``` mermaid
graph TD
    A[Início] --> B[Declaração da struct lista]
    B --> C[Criação das structs m1, m2 e m3]
    C --> D[Criação do ponteiro gancho]
    D --> E[Atribuição de valores para m1, m2 e m3]
    E --> F[Atribuição de m1.proximo = &m2]
    F --> G[Atribuição de m2.proximo = &m3]
    G --> H[Atribuição de m3.proximo = NULL]
    H --> I[Laço while]
    I --> J[Condição: gancho != NULL]
    J --> K[Print gancho->valor]
    K --> L[Atualização gancho = gancho->proximo]
    L --> I
    I --> M[Fim]
```