``` mermaid
graph TD
    A[Início] --> B[Solicitar operação]
    B --> |Receber opção| C[Executar operação]
    C --> |Executar operação| D[Atualizar saldo]
    D --> E[Verificar se a operação é válida]
    E --> |Imprimir resultado ou mensagem de erro| F[Fim]
```