``` mermaid
graph TD
    subgraph Main
        M1[Declaração das variáveis metragem1, metragem2, resultado, resp]
        M2[Loop do-while]
        M3[Entrada de metragem1]
        M4[Entrada de metragem2]
        M5[Cálculo do resultado]
        M6[Impressão do resultado]
        M7[Entrada de resp]
        M8[Condição: resp == 1]
        M9[Retorno 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 -- Sim --> M2
    M8 -- Não --> M9
    M2 --> M9
```