# Código de Filtrar Carros com Preços Menores:

- Uso de structs para criar uma estrutura de dados complexa.
- Leitura de informações sobre carros, armazenamento em um vetor de structs e filtragem de carros com preços menores que um valor especificado.
- Uso adequado de entrada e saída de dados.

## Fluxograma do Código

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
