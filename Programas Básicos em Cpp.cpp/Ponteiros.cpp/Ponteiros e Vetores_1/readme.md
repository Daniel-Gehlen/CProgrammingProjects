``` mermaid
graph TD
    A[Início] --> B[Criação do vetor e ponteiro]
    B --> C[Operações de manipulação de ponteiro]
    C --> D[Incremento do ponteiro]
    D --> E[Incremento novamente]
    E --> F[Alteração de valor usando ponteiro]
    F --> G[Impressão do vetor]
    G --> H[Fim]
    
    B --> I{Fim das operações?}
    I --> |Sim| H
    I --> |Não| C

    C --> J{Incremento completo?}
    J --> |Sim| I
    J --> |Não| D

    D --> K{Incremento completo?}
    K --> |Sim| I
    K --> |Não| E

    E --> L{Alteração completa?}
    L --> |Sim| I
    L --> |Não| F

```