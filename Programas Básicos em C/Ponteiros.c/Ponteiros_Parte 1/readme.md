# Código de Manipulação de Ponteiros em Vetor:

- Trabalhar com ponteiros para acessar e modificar elementos de um vetor.
- Demonstração de como um ponteiro pode ser usado para acessar e alterar valores em posições específicas de um vetor.

## Fluxograma do Código 

``` mermaid
graph TD
    subgraph Main
        M1[Declaração da variável x]
        M2[Atribuição de valor para x]
        M3[Declaração do ponteiro]
        M4[Atribuição do endereço de x ao ponteiro]
        M5[Impressão do valor apontado pelo ponteiro]
        M6[getchar]
        M7[return 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7

    subgraph Variável
        V1[int x]
    end

    V1 --> M1

    subgraph Ponteiro
        P1[int *ponteiro]
    end

    P1 --> M3
    P1 --> M4
    P1 --> M5

    subgraph Impressão
        I1[printf--%i\n--, *ponteiro--]
    end

    I1 --> M5


```
