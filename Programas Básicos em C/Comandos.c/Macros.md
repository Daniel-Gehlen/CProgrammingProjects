``` mermaid

graph TD
    subgraph Definicoes
        D1[Define PI como 3.14159]
        D2[Define DOIS_PI como 2 * PI]
        D3[Define AREA_CIRCULO -raio- como raio * raio * PI]
    end

    subgraph Main
        M1[Função main]
        M2[printf - Valor de PI]
        M3[printf - Valor de DOIS_PI]
        M4[printf - Valor da AREA_CIRCULO -10-]
        M5[getchar]
        M6[return 0]
    end

    D1 --> D2
    D1 --> D3

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6

```