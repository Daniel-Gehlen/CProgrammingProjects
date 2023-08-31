``` mermaid
graph TD
    subgraph Main
        M1[Leitura das medidas a, b e c]
        M2[Verificação se as medidas formam um triângulo]
        M3[Impressão de resultado para triângulo]
        M4[Verificação de triângulo equilátero]
        M5[Impressão de resultado para equilátero]
        M6[Verificação de triângulo isósceles]
        M7[Impressão de resultado para isósceles]
        M8[Impressão de resultado para escaleno]
        M9[Impressão de resultado para não triângulo]
        M10[Retorno 0]
    end

    M1 --> M2
    M2 -->|Sim| M3
    M2 -->|Não| M9
    M3 --> M4
    M4 -->|Sim| M5
    M4 -->|Não| M6
    M6 -->|Sim| M7
    M6 -->|Não| M8
    M7 --> M10
    M8 --> M10
    M9 --> M10
```