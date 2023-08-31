``` mermaid
flowchart TD
    subgraph InserirDados
    A1[Para i de 0 até N]
    A2[Digite a Marca do Carro]
    A3[Digite o Ano do Carro]
    A4[Digite o Preço do Carro]
    end

    subgraph ExibirCarros
    B1[Para i de 0 até N]
    B2[Se Preço < p]
    B3[Exibir Marca, Ano e Preço]
    end

    subgraph Principal
    InserirDados --> A1 --> A2 --> A3 --> A4 --> ExibirCarros
    B3 --> B2
    end
```