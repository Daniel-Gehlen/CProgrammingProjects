``` mermaid
graph TD
    subgraph Main
        M1[Declaração da variável idade]
        M2[Entrada da idade]
        M3[Condição: idade >= 18]
        M4[Impressão: Maior de idade]
        M5[Impressão: Menor de idade]
        M6[return 0]
    end

    M1 --> M2
    M2 --> M3
    M3 -- Sim --> M4
    M3 -- Não --> M5
    M4 --> M6
    M5 --> M6
```