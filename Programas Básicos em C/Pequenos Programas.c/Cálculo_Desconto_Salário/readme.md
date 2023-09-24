# Cálculo: desconto salário... :

- Parte de um programa que realiza cálculos de desconto no salário de um usuário com base em uma lógica específica.

## Fluxograma do Código

``` mermaid
graph TD
    subgraph Main
        M1[Declaração das variáveis salario, inss, ir, sal_liquido]
        M2[Mensagem para inserir salário bruto]
        M3[Entrada do salário bruto]
        M4[Condição para cálculo do INSS]
        M5[Cálculo do INSS]
        M6[Cálculo do salário líquido]
        M7[Mensagem do desconto do INSS]
        M8[Mensagem do salário líquido]
        M9[Retorno 0]
    end

    M1 --> M2
    M2 --> M3
    M3 --> M4
    M4 --> M5
    M5 --> M6
    M6 --> M7
    M7 --> M8
    M8 --> M9
```
