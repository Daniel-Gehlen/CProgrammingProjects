``` mermaid

graph TD
    subgraph Definicoes
        D1[Define MAIOR -- x, y -- como x > y ? x : y]
        D2[Define E_MINUSCULO -char- como char >= 'a' && char <= 'z']
    end

    subgraph Main
        M1[Função main]
        M2[Declara char x]
        M3[Se E_MINUSCULO -x-]
        M4[printf - É uma letra minúscula]
        M5[Senão]
        M6[printf - Não é uma letra minúscula]
        M7[printf - Valor da MAIOR -- x --, -- y --]
        M8[system]
        M9[return 0]
    end

    D1 --> M1
    D2 --> M3

    M1 --> M2
    M2 --> M3
    M3 -->|Verdadeiro| M4
    M3 -->|Falso| M5
    M4 --> M8
    M5 --> M8
    M8 --> M9


```