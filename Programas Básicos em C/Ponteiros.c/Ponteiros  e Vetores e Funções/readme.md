# Código de Somar Vetor com Ponteiros:

- Utilização de ponteiros para somar elementos de um vetor.
- Usar ponteiros para percorrer um vetor e calcular a soma dos elementos.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Main
        MM1[Função main]
        MM2[Declara int somarVetor --int vetor-- --, const int n--]
        MM3[Declara int vetor --10-- e o inicializa]
        MM4[Chama somarVetor --vetor, 10--]
        MM5[printf - Soma dos membros do vetor]
        MM6[getchar]
        MM7[return 0]
    end

    MM1 --> MM2
    MM2 --> MM3
    MM3 --> MM4
    MM4 --> MM5
    MM5 --> MM6
    MM6 --> MM7

    MM2 --> MM4

    subgraph Funções
        F1[int somarVetor--int vetor-- --, const int n--]

        F1 --> MM2
    end


```
