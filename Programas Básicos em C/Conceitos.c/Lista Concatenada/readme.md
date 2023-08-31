``` mermaid
graph TD
    subgraph Struct
        S1[struct lista]
        S2[struct lista]
        S3[struct lista]
    end

    subgraph Main
        M1[Função main]
        M2[Declara struct lista m1, m2, m3]
        M3[Declara struct lista *gancho]
        M4[atribui valor 10 a m1.valor]
        M5[atribui valor 20 a m2.valor]
        M6[atribui valor 30 a m3.valor]
        M7[atribui &m2 a m1.proximo]
        M8[atribui &m3 a m2.proximo]
        M9[atribui struct lista * -- 0 a m3.proximo]
        M10[Loop while]
        M11[printf - m1.valor]
        M12[gancho = gancho->proximo]
        M13[getchar]
        M14[return 0]
    end

    S1 --> S2
    S2 --> S3

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9
    M9 --> M10
    M10 -->|Condição| M11
    M11 --> M12
    M12 -->|Continuar| M10
    M12 -->|Terminar| M13
    M13 --> M14


```