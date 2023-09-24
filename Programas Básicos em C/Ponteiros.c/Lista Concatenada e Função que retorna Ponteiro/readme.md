# Código de Procurar Valor em Lista Ligada:

- Manipulação de listas ligadas.
- Implementação de uma função para procurar um valor em uma lista ligada e retornar um endereço de memória se encontrado.
- Criação manual de uma lista ligada e chamada de função de pesquisa.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Struct
        S1[struct lista]
    end

    subgraph Main
        MM1[Função main]
        MM2[Declara struct lista m1, m2, m3]
        MM3[Declara struct lista *resultado, *gancho = &m1]
        MM4[Declara int valor]
        MM5[Atribui 5 a m1.valor]
        MM6[Atribui 10 a m2.valor]
        MM7[Atribui 15 a m3.valor]
        MM8[Atribui &m2 a m1.proximo]
        MM9[Atribui &m3 a m2.proximo]
        MM10[Atribui --struct lista *--0 a m3.proximo]
        MM11[printf - Digite o valor da pesquisa]
        MM12[scanf]
        MM13[Chama procurarValor]
        MM14[if--resultado == --struct lista *--0]
        MM15[printf - Valor não encontrado]
        MM16[else]
        MM17[printf - Valor encontrado]
        MM18[getchar]
        MM19[return 0]
    end

    MM1 --> MM2
    MM2 --> MM3
    MM3 --> MM4
    MM4 --> MM5
    MM5 --> MM6
    MM6 --> MM7
    MM7 --> MM8
    MM8 --> MM9
    MM9 --> MM10
    MM10 --> MM11
    MM11 --> MM12
    MM12 --> MM13
    MM13 -->|Valor não encontrado| MM14
    MM13 -->|Valor encontrado| MM16
    MM14 --> MM15
    MM16 --> MM17
    MM17 --> MM18
    MM18 --> MM19

    S1 --> MM2
    S1 --> MM3
    S1 --> MM13


```
