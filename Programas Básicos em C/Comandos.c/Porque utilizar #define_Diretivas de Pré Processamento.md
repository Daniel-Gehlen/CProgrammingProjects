``` mermaid

graph TD
    subgraph Main
        M1[Declaração e atribuição de valor para NUMERO_MAXIMO_ALUNOS]
        M2[Declaração das funções]
        M3[Impressão de NUMERO_MAXIMO_ALUNOS]
        M4[Chamada da função umaFuncao]
        M5[Chamada da função umaOutraFuncao]
        M6[Impressão de NUMERO_MAXIMO_ALUNOS dentro de umaFuncao]
        M7[Impressão de NUMERO_MAXIMO_ALUNOS dentro de umaOutraFuncao]
        M8[system--Pause--]
        M9[return 0]
    end

    M1 --> M2
    M2 --> M3
    M2 --> M4
    M2 --> M5
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9

    subgraph Define
        D1[NUMERO_MAXIMO_ALUNOS = 1000]
    end

    D1 --> M1

    subgraph Funções
        F1[void umaFuncao--void--]
        F2[void umaOutraFuncao--void--]
    end

    F1 --> M4
    F2 --> M5

    subgraph Variáveis
        V1[ ]
    end

    V1 --> M3
    V1 --> M6
    V1 --> M7

```