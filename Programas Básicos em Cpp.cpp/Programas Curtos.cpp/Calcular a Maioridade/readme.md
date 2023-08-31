``` mermaid
graph TD
    A[Início] --> B[Declaração da variável idade]
    B --> C[Ler a idade]
    C --> |idade >= 18| D[Verificar se a idade é maior ou igual a 18]
    C --> |idade < 18| E[Verificar se a idade é menor que 18]
    D --> F[Imprimir --Você é maior de idade--]
    E --> G[Imprimir --Você é menor de idade--]
    F --> H[Fim]
    G --> H[Fim]
```