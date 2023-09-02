``` mermaid
graph TD
    subgraph Main
        M1[Declaração da função copiarString]
        M2[Declaração da variável string1]
        M3[Declaração da variável string2]
        M4[Chamada da função copiarString]
        M5[Imprimir string2]
        M6[Retorno 0]
    end

    subgraph copiarString
        CS1[Loop de cópia]
        CS2[Último caractere como nulo]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> CS1
    CS1 --> CS2
    CS2 --> M5
    M5 --> M6
```