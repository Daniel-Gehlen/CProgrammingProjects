``` mermaid
graph TD
    subgraph Main
        MM1[Função main]
        MM2[Declara void testVariavel--int x--]
        MM3[Declara void testPonteiro--int *pX--]
        MM4[Declara int teste = 1]
        MM5[Declara int *pTeste = &teste]
        MM6[Chama testeVariavel--teste--]
        MM7[Chama testePonteiro--pTeste--]
        MM8[printf - Valor da variável teste]
        MM9[getchar]
        MM10[return 0]
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

    MM4 --> MM8

    subgraph Funções
        F1[void testeVariavel--int x--]
        F2[void testePonteiro--int *pX--]

        F1 --> F2
    end

    F1 --> MM2
    F2 --> MM3


```