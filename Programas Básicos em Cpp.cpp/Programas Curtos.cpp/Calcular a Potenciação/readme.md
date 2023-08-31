``` mermaid
graph TD
    A[Início] --> B[Configurar localização para português]
    B --> C[Imprimir mensagem de boas-vindas]
    C --> D[Iniciar loop do-while]
    D --> E[Solicitar a base]
    E --> F[Solicitar o expoente]
    F --> G[Inicializar variáveis n e pot]
    G --> |expoente = 0| K[Imprimir resultado --1-- e sair]
    G --> |expoente > 0| H[Iniciar loop de cálculo]
    H --> I[Calcular pot * base]
    I --> J[Verificar se n + 1 < expoente]
    J --> |sim| I
    J --> |não| L[Verificar expoente]
    L --> |expoente = 1| M[Imprimir resultado --base--]
    L --> |expoente != 1| N[Imprimir resultado --pot--]
    H --> O[Verificar expoente]
    O --> |expoente < 0| P[Inverter o expoente e continuar loop]
    P --> I
    O --> |expoente = 0| K
    O --> |expoente != 0| Q[Inverter pot]
    Q --> I
    D --> R[Solicitar se deseja calcular novamente]
    R --> |novamente = 's'| D[Continuar o loop]
    R --> |novamente != 's'| S[Encerrar o loop]
    S --> T[Fim]

```