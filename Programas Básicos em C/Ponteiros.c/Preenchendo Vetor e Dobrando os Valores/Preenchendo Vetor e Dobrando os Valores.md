``` mermaid
graph TD
    subgraph Main
        M1[Declaração do vetor numeros]
        M2[Impressão do preenchimento do vetor]
        M3[Chamada da função inserir]
        M4[Impressão do dobro dos valores]
        M5[Chamada da função imprimir]
        M6[return 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6

    subgraph Funções
        F1[void inserir--int a-- -- --]
        F2[void imprimir--int b-- -- --]
    end

    F1 --> M3
    F2 --> M5

    subgraph Vetor
        V1[numeros]
    end

    V1 --> M3
    V1 --> M5


```