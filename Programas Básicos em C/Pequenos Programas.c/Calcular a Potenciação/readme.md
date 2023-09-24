# Calcular a Potenciação... :

- É um fragmento de código que realiza cálculos de potenciação.
- Solicita a base e o expoente como entrada.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Main
        M1[Declaração das variáveis base, pot, expoente, n, novamente]
        M2[Mensagem de boas-vindas]
        M3[Loop do-while]
        M4[Entrada da base]
        M5[Entrada do expoente]
        M6[Atribuição inicial de n e pot]
        M7[Condição: expoente == 0]
        M8[Impressão do resultado --expoente == 0--]
        M9[Condição: expoente > 0]
        M10[Loop do-while --expoente > 0--]
        M11[Aumento de pot e n]
        M12[Condição: expoente == 1 --expoente > 0--]
        M13[Impressão do resultado --expoente == 1, expoente > 0--]
        M14[Impressão do resultado --expoente > 0--]
        M15[Condição: expoente < 0]
        M16[Ajuste de expoente e loop do-while --expoente < 0--]
        M17[Condição: expoente == 1 --expoente < 0--]
        M18[Impressão do resultado --expoente == 1, expoente < 0--]
        M19[Impressão do resultado --expoente < 0--]
        M20[Entrada para calcular novamente]
        M21[Condição para continuar o loop]
        M22[Retorno 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 -- Sim --> M8
    M7 -- Não --> M9
    M9 --> M10
    M10 --> M11
    M11 --> M9
    M10 --> M12
    M12 -- Sim --> M13
    M12 -- Não --> M14
    M9 --> M15
    M15 --> M16
    M16 --> M17
    M17 --> M18
    M18 --> M19
    M19 --> M15
    M3 --> M20
    M20 --> M21
    M21 -- s --> M3
    M21 -- n --> M22
    M22 --> M21
```
