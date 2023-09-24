# Cadastro de Músicas... :

- Não é um código completo, mas sugere uma aplicação para cadastrar informações sobre músicas, como título, artista, gênero, etc.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Main
        M1[Declaração do vetor nome1]
        M2[Declaração do vetor nome2]
        M3[Declaração do vetor nome3]
        M4[Declaração do vetor nome4]
        M5[Entrada do nome da música 1]
        M6[Entrada do nome da música 2]
        M7[Entrada do nome da música 3]
        M8[Entrada do nome da música 4]
        M9[Impressão do nome da música 1]
        M10[Impressão do nome da música 2]
        M11[Impressão do nome da música 3]
        M12[Impressão do nome da música 4]
        M13[return 0]
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
    M11 --> M12
    M12 --> M13

    subgraph Vetores
        V1[nome1]
        V2[nome2]
        V3[nome3]
        V4[nome4]
    end

    V1 --> M5
    V2 --> M6
    V3 --> M7
    V4 --> M8
```
