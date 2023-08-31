``` mermaid
graph TD
    subgraph Main
        M1[Leitura do orçamento]
        M2[Verificação do orçamento]
        M3[Viagem internacional]
        M4[Viagem nacional]
        M5[Fim do programa]
    end

    M1 --> M2
    M2 -->|>= 10000| M3
    M2 -->|< 10000| M4
    M3 --> M5
    M4 --> M5
```