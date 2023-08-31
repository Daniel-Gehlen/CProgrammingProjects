``` mermaid
graph TD
A[main] --> B[Definir N = 3]
B --> C[Criar vetor de carros --tamanho N--]
C --> D[Ler dados para o vetor car]
D --> E[Ler valor p]
E --> F[Loop para verificar carros com preço < p]
F --> G[if --car--i--.preco < p--]
G -- Sim --> H[Imprimir informações do carro]
H --> F
G -- Não --> I[Retornar 0]
```