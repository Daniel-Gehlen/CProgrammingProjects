``` mermaid
graph TD
A[main] --> B[inicializaPilha--p1--]
B --> C[empilha--10, p1--]
C --> D[empilha--20, p1--]
D --> E[empilha--30, p1--]
E --> F[imprimePilha--p1--]
F --> G[desempilha--p1--]
G --> H[ptr == 0?]
H -- Sim --> I[Pilha vazia]
I --> F
H -- Não --> J[p->topo = ptr->prox]
J --> K[ptr->prox = 0]
K --> L[dado = ptr->dado]
L --> M[free--ptr--]
M --> N[dado]
N --> F
```