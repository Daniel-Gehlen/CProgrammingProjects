``` mermaid
graph TD
    A[Início] --> B[Declaração de função testeVariavel]
    B --> C[Declaração de função testePonteiro]
    C --> D[Declaração das variáveis teste e pTeste]
    D --> E[Chamada de testeVariavel --teste--]
    E --> F[Passagem da cópia do valor de teste]
    F --> G[Incremento da variável x --cópia-- em testeVariavel]
    G --> H[Impressão do valor de x --cópia-- em testeVariavel]
    H --> E
    E --> I[Chamada de testePonteiro--pTeste--]
    I --> J[Passagem do endereço de teste]
    J --> K[Incremento do valor apontado por pX em testePonteiro]
    K --> I
    E --> L[Impressão do valor de teste]
    L --> M[Fim]

```