#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
int main(){
   
Pilha *pilha = create(3);
add(pilha, 10);
add(pilha, 6);
top(pilha);
bottom(pilha);
pop(pilha);
find(pilha,10);
size(pilha);
printAll(pilha);
return 1;
}
