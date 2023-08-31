``` mermaid
graph TD
    A --> Início --> B[Definir MAIOR -- x, y --]
    B --> C[Definir E_MINUSCULO--char--]
    C --> D[Atribuir valor 'a' a x]
    D --> E[Se E_MINUSCULO -- x -- for verdadeiro]
    E --> F[Exibir x]
    E --> G[Exibir --É uma letra minúscula--]
    D --> H[Se E_MINUSCULO -- x -- for falso]
    H --> I[Exibir x]
    H --> J[Exibir --Não é uma letra minúscula--]
    B --> K[Exibir MAIOR--10, 50--]
    K --> L[Fim]
```