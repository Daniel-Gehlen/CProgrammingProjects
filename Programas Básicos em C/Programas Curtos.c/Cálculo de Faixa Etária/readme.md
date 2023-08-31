``` mermaid
graph TD
    subgraph Main
        M1[Declaração das variáveis idade1, idade2, idade3, media]
        M2[Mensagem para inserir idade 1]
        M3[Entrada da idade 1]
        M4[Mensagem para inserir idade 2]
        M5[Entrada da idade 2]
        M6[Mensagem para inserir idade 3]
        M7[Entrada da idade 3]
        M8[Cálculo da média]
        M9[Mensagem da média calculada]
        M10[Retorno 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9
    M9 --> M10
```