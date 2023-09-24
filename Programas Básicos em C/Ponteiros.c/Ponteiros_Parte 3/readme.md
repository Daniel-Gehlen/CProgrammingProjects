# Código de Ponteiro para Variável com Diferentes Tipos de Dados:

- Continuação da manipulação de ponteiros para acessar e modificar o conteúdo de variáveis de diferentes tipos, como int, double e char.

## Fluxograma do Código

``` mermaid

graph TD
    subgraph Main
        M1[Declaração da variável x e atribuição de valor]
        M2[Declaração do ponteiro]
        M3[Atribuição do endereço de x ao ponteiro]
        M4[Declaração da variável y e atribuição de valor]
        M5[Atribuição do valor de y ao endereço apontado pelo ponteiro]
        M6[Impressão dos valores de x e y]
        M7[getchar]
        M8[return 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8

    subgraph Variáveis
        V1[int x = 10]
        V2[int y = 20]
    end

    V1 --> M1
    V2 --> M4

    subgraph Ponteiro
        P1[int *ponteiro]
    end

    P1 --> M2
    P1 --> M3
    P1 --> M5

    subgraph Impressão
        I1[printf--%i %i\n, x, y--]
    end

    I1 --> M6
```
