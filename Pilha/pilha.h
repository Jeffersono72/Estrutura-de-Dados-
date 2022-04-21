typedef struct pilha Pilha;

Pilha * create (int n);

int add (Pilha * pilha, int e);

int pop (Pilha * pilha);

int top (Pilha * pilha);

int bottom (Pilha * pilha);

int find (Pilha * pilha, int e);

int isEmpty (Pilha * pilha);

int isFull (Pilha * pilha);

int size (Pilha * pilha);

void clear (Pilha * pilha);

void printAll (Pilha * pilha);
