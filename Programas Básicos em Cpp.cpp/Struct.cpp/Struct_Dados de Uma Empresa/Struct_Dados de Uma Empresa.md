``` mermaid
graph TD;
    inputNome(Nome: string);
    inputCNPJ(CNPJ: string);
    inputLocal(Local: string);
    inputEstado(Estado: string);
    outputNome(Nome);
    outputCNPJ(CNPJ);
    outputLocal(Local);
    outputEstado(Estado);

    subgraph Entrada;
    inputNome --> inputCNPJ --> inputLocal --> inputEstado;
    end;

    subgraph Saída;
    outputNome --> outputCNPJ --> outputLocal --> outputEstado;
    end;

    Entrada --> Saída;

```