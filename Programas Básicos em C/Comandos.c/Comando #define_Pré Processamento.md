``` mermaid
graph TD
    subgraph Definicoes
        D1[Define SIM como 100]
        D2[Define NA0 como -100]
    end

    subgraph Main
        M1[Função main]
        M2[Declara int x]
        M3[printf]
        M4[scanf]
        M5[Se x <= 10]
        M6[printf]
        M7[Senão]
        M8[printf]
        M9[getchar]
        M10[return 0]
    end

    D1 -->|100| M1
    D2 -->|-100| M1
    M1 -->|Começo| M2
    M2 -->|Variável x| M3
    M3 -->|Mensagem| M4
    M4 -->|Lê x| M5
    M5 -->|Verdade| M6
    M5 -->|Falso| M7
    M7 -->|Imprime SIM| M9
    M6 -->|Imprime NA0| M9
    M9 -->|Aguarda| M10



```