``` mermaid
graph TD
    subgraph Main
        M1[Leitura da opção]
        M2[Switch case para opção]
        M3[Opção 1: Depósito]
        M4[Opção 2: Saque]
        M5[Opção 3: Saldo]
        M6[Opção inválida]
        M7[Opção 4: Sair]
        M8[Loop até opção 4]
        M9[Fim das operações]
        M10[system --pause--]
    end

    M1 --> M2
    M2 -->|1| M3
    M2 -->|2| M4
    M2 -->|3| M5
    M2 -->|4| M7
    M2 -->|default| M6
    M3 --> M8
    M4 --> M8
    M5 --> M8
    M6 --> M8
    M7 --> M9
    M8 --> M1
    M9 --> M10
    M10 --> M10
```