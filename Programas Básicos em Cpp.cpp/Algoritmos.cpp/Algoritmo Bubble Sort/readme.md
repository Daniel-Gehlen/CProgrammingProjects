``` mermaid
graph TD
    A --> Início --> B--Declaração de Variáveis--
    B --> C--Entrada de Dados--
    C --> D[Para i de 0 até N-1]
    D --> E--Condição: lista--i-- > lista--i+1----
    E --> | Sim | F -- Troca lista--i-- e lista--i+1-- --
    F --> D 
    E --> | Não | D
    D --> G[Fim do 1º loop]
    G --> H--Exibição dos Números Ordenados--
    H --> I[Fim]
```