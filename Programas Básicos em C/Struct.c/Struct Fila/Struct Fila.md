``` mermaid
graph TD
A[main] --> B[inicializaFila--f1--]
B --> C[enfileira--10, f1--]
C --> D[enfileira--20, f1--]
D --> E[enfileira--30, f1--]
E --> F[imprimeFila--f1--]
F --> G{Desenfileira}
G -- Sim --> H[desenfileira--f1--]
H --> I{f->ini == NULL?}
I -- Não --> G
I -- Sim --> F
G -- Não --> J[Fim]

```