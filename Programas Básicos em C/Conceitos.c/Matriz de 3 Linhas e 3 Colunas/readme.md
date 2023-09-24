# Matriz de 3 Linhas e 3 Colunas... :

- Pode ser parte de um programa que cria e manipula uma matriz 3x3 em C.
- Envolve entrada de dados para os elementos da matriz.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Matriz
        M1[Matriz de 3x3]
        M2[Loop for --linha--]
        M3[Loop for --coluna--]
        M4[printf - Digitar valores]
        M5[scanf]
        M6[printf - Veja a sua Matriz]
        M7[Loop for --linha--]
        M8[Loop for --coluna--]
        M9[printf - Elemento da matriz]
    end

    subgraph Main
        MM1[Função main]
        MM2[Declara int linha, coluna]
        MM3[Declara int matriz --3-- --3--]
        MM4[Loop for --linha--]
        MM5[Loop for --coluna--]
        MM6[printf - Digitar os valores]
        MM7[scanf]
        MM8[printf - Veja a sua Matriz]
        MM9[Loop for --linha--]
        MM10[Loop for --coluna--]
        MM11[printf - Elemento da matriz]
        MM12[system]
        MM13[return 0]
    end

    MM1 --> MM2
    MM2 --> MM3
    MM3 --> MM4
    MM4 -->|Condição| MM5
    MM5 --> MM6
    MM6 --> MM7
    MM7 -->|Continuar| MM5
    MM7 -->|Terminar| MM8
    MM8 --> MM9
    MM9 -->|Condição| MM10
    MM10 --> MM11
    MM11 -->|Continuar| MM9
    MM11 -->|Terminar| MM12
    MM12 --> MM13


```
