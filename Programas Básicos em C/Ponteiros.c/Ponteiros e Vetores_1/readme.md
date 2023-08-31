``` mermaid
graph TD
    subgraph Main
        M1[Declaração do vetor]
        M2[Declaração do ponteiro]
        M3[Atribuição do vetor ao ponteiro]
        M4[Operações com o ponteiro]
        M5[Operações de incremento no ponteiro]
        M6[Alteração de valor usando ponteiro]
        M7[Print do valor alterado]
        M8[getchar]
        M9[return 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9

    subgraph Vetor
        V1[int vetor--3--]
    end

    V1 --> M1

    subgraph Ponteiro
        P1[int *ponteiro]
    end

    P1 --> M2
    P1 --> M3
    P1 --> M4
    P1 --> M5
    P1 --> M6

    subgraph Impressão
        I1[printf--%i\n, vetor--1-- --]
    end

    I1 --> M7


```