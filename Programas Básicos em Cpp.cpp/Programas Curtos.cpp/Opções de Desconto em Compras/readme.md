``` mermaid
graph TD
    A[Início] --> B[Solicitar valor da compra e letra de desconto]
    B --> |Receber entradas| C[Verificar opção de desconto]
    C --> |Calcular desconto| D[Calcular valor total]
    D --> E[Imprimir valor total com desconto]
    E --> F[Fim]
```