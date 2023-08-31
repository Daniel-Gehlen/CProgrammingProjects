``` mermaid
graph TD
    A[Início] --> B[Solicitar salário bruto]
    B --> C[Verificar faixas de INSS]
    C --> |Salário <= 1993.72| D[Calcular INSS com taxa 0.08]
    C --> |1993.73 <= Salário <= 2822.50| E[Calcular INSS com taxa 0.09]
    C --> |Salário > 2822.50| F[Não há desconto de INSS]
    D --> G[Calcular IR]
    E --> G
    F --> G
    G --> H[Calcular salário líquido]
    H --> I[Imprimir desconto INSS]
    I --> J[Imprimir salário líquido]
    J --> K[Fim]

```