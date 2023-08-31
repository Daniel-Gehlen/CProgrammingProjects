``` mermaid
graph TD
A[main] --> B[Definir estrutura local]
B --> C[Definir estrutura empresa com membro local]
C --> D[Criar variável emp do tipo empresa]
D --> E[Ler nome e CNPJ da empresa]
E --> F[Ler cidade e estado da empresa]
F --> G[Imprimir informações da empresa]
G --> H[Retornar 0]
```