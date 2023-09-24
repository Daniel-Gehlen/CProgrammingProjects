# Código de Ponteiro para Struct de Horário:

- Manipula structs e ponteiros em C.
- Criaça uma struct horario e manipula seus membros usando ponteiros.
- Acessa e modifica valores de membros da struct através de ponteiros.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Main
        M1[Declaração da estrutura horario]
        M2[Declaração das variáveis agora e depois]
        M3[Atribuição de depois para o endereço de agora]
        M4[Atribuição dos valores usando o ponteiro depois]
        M5[Print dos valores de agora]
        M6[Declaração da variável somatorio]
        M7[Declaração da estrutura antes]
        M8[Atribuição dos valores para antes usando operações]
        M9[Print dos valores de antes]
        M10[getchar]
        M11[return 0]
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
    M10 --> M11

    M4 --> M7

    subgraph Structs
        S1[struct horario]
        S2[struct antes]
        S3[struct agora]
    end

    S1 --> M2
    S2 --> M7
    S3 --> M3

    subgraph Ponteiros
        P1[struct horario *depois]
    end

    P1 --> M3
    P1 --> M4


```
