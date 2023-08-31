``` mermaid

graph TD
    subgraph Definicoes
        D1[Define PI como 3.14159]
        D2[Define NULO como 0]
    end

    subgraph Funcao
        F1[Função areaCirculo]
        F2[Retorna raio * raio * PI]
    end

    subgraph Main
        M1[Função main]
        M2[Declara double r]
        M3[Loop while]
        M4[printf - Mensagem]
        M5[scanf - Lê r]
        M6[Calcula e imprime areaCirculo r]
        M7[Decrementa i]
        M8[(Aguarda entrada do usuário)]
        M9[return 0]
    end

    D1 --> F1
    D2 --> M1

    F1 --> F2
    F2 --> M6

    M1 --> M2
    M2 --> M3
    M3 -->|Condição| M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9



```