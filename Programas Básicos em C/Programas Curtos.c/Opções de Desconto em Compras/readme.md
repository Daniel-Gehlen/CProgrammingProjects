``` mermaid
graph TD
    subgraph Main
        M1[Leitura do valor da compra]
        M2[Leitura da opção de desconto]
        M3[Switch case para opção de desconto]
        M4[Opção 'a': Cálculo de desconto e valor final]
        M5[Opção 'v': Cálculo de desconto e valor final]
        M6[Opção 'b': Cálculo de desconto e valor final]
        M7[Opção inválida]
        M8[Retorno 0]
    end

    M1 --> M2
    M2 --> M3
    M3 -->|'a'| M4
    M3 -->|'v'| M5
    M3 -->|'b'| M6
    M3 -->|default| M7
    M4 --> M8
    M5 --> M8
    M6 --> M8
    M7 --> M8
```