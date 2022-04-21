#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
struct pilha
{
int *data;
int n;
int size;
};

Pilha *create(int n)
{ //Cria a Instância de pilha e recebe tamanho conforme o usuário deseja
Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
pilha->data = (int *)calloc(n, sizeof(int));
pilha->n = n;
pilha->size = 0; 
printf("Instância de pilha criada em %p!\n\n", pilha);
return pilha;
}


int add(Pilha *pilha, int e)
{ // Adiciona um Elemento a pilha caso ela não esteja cheia
if (pilha->size < pilha->n)
{ 
    
pilha->data[pilha->size] = e;
printf("Elemento %i inserido na pilha->[%i].\n", e,pilha->size);
pilha->size++;
return 1; //Retorna true caso fostes efetuado com sucesso
}
return 0; // Do contrário retorna false
}

int pop(Pilha *pilha)
 //Retira elemento do topo da pilha caso ela não esteja vazia
{
if (pilha->size != 0){
 printf("Elemento removido da pilha: %i \n", pilha->data[pilha->size-1]);
pilha->data[pilha->size-1] = 0;
pilha->size--;

return 1; //Retorna true caso fostes efetuado com sucesso
}

return 0; // Do contrário retorna false
}


int top (Pilha * pilha){
    if(pilha->size != 0){ //Retorna o elemento do topo da pilha caso ela não esteja vazia
    int top;
    top = pilha->data[pilha->size-1];
    printf("Elemento do topo [%i] sendo retornado\n", top);
   
    return top;
    
}

return 0;
    
}

int bottom (Pilha * pilha){
    // Retorna o Elemento do fundo da pilha
    if(pilha->size != 0){
    int bottom; 
    bottom = pilha->data[0];
    printf("Elemento da base [%i] sendo retornado\n", bottom);
    return bottom;
    
}
return 0;
}



int find(Pilha *pilha, int e)
{ //Procura por um Elemento na pilha e retorna true caso tenha sido encontrado
   for(int contador = 0; contador < pilha->n; contador++)
  {
    if(e == pilha->data[contador]){
        printf("O Elemento %i que foi procurado, está alocado na posição [%d]\n\n",pilha->data[contador],contador);
        return 1;
    }
    
    }
  
return -1;
}

int isEmpty (Pilha * pilha){
    if(pilha->size == 0){
    return 1; //Caso a pilha esteja vazia retorna true, mas caso não esteja retorna false
    }
    return 0;
    
}
int isFull (Pilha * pilha){
    if(pilha->size == pilha->n){
    return 1; // Caso a pilha esteja cheia retorna true e retorna false caso não esteja
    }
    return 0;
    
}


int size( Pilha *pilha)
{  //Mostra a quantidade de elementos presentes na pilha
    printf("Quantidade de elementos inseridos em pilha %i\n", pilha->size);
return 1;
}

void clear (Pilha * pilha){
    //Libera a memória que antes fostes alocada para a pilha
    free(pilha);
}

void printAll(Pilha *pilha) { //Mostra todos os elementos presentesna pilha em ordem.
     for(int contador = 0; contador < pilha->n; contador++)
     if(pilha->data[contador] != 0)
     printf("Elementos de pilha[%i] = %i\n",contador,pilha->data[contador]);
    
}