``` mermaid
graph TD
    subgraph Struct
        S1[struct horario]
    end

    subgraph Main
        MM1[Função main]
        MM2[Declara struct horario hoje]
        MM3[Declara int hora]
        MM4[Declara int minuto]
        MM5[Declara int segundo]
        MM6[Atribui 200 a hora]
        MM7[Atribui 300 a minuto]
        MM8[Atribui 500 a segundo]
        MM9[Atribui &hora a hoje.pHora]
        MM10[Atribui &minuto a hoje.pMinuto]
        MM11[Atribui &segundo a hoje.pSegundo]
        MM12[printf - Hora]
        MM13[printf - Minuto]
        MM14[printf - Segundo]
        MM15[Alteração de valor]
        MM16[printf - Novo Segundo]
        MM17[getchar]
        MM18[return 0]
    end

    S1 --> MM2

    MM1 --> MM2
    MM2 --> MM3
    MM2 --> MM4
    MM2 --> MM5
    MM3 --> MM6
    MM4 --> MM7
    MM5 --> MM8
    MM6 --> MM9
    MM7 --> MM10
    MM8 --> MM11
    MM9 --> MM12
    MM10 --> MM13
    MM11 --> MM14
    MM14 --> MM15
    MM15 --> MM16
    MM16 --> MM17
    MM17 --> MM18


```