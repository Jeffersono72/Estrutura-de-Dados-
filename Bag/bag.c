#include <stdio.h>
#include <stdlib.h>
#include "bag.h"
struct bag
{
int *data;
int n;
int size;
};
Bag *create(int n)
{
Bag *bag = (Bag *)malloc(sizeof(Bag));
bag->data = (int *)calloc(n, sizeof(int));
bag->n = n;
bag->size = 0; 
printf("Instância de Bag criada em %p!\n\n", bag);
return bag;
}

int insert(Bag *bag, int e) //Insere em bag um número passado pelo usuário em um local aleátorio da bag.
{
if (bag->size < bag->n && e > 0) // avalia se bag não está cheio e se o elemento ‘e’ é positivo
{ 
int i = 0;
do
{
i = rand() % bag->n; // atribui um valor a i, tal que 0 <= i < n
} while (bag->data[i] != 0); // avalia se em i já não há um elemento
bag->size++;
bag->data[i] = e;
printf("Elemento %i inserido na bag->[%i].\n", e,i);
return 1; // Retorna verdadeiro caso tenha sido inserido o número na bag
}
return 0; // Retorna falso caso não tenha sido inserido o número na bag
}

int get(Bag *bag)

{
if (bag->size <= bag->n && bag->size >= 0){ // Avalia se bag tem algum conteúdo para ser retirado aleatóriamente
    int i;
    do
{
    
i = rand() % bag->n;

} while (bag->data[i] == 0); 
int e = bag->data[i];
bag->size--; // Diminui o tamanho da bag devido a retirada de um de seus elementos
bag->data[i] = 0;
printf("\nElemento %i da posição bag->[%i], foi retirado.\n\n",e, i);
return e; // Retorna o elemento que foi retirado da bag
}

return 0; // Retorna falso caso a bag não possua elementos
}
int search(Bag *bag, int e)
{
   for(int contador = 0; contador <= bag->n; contador++)
    if(e == bag->data[contador]){
        printf("O Elemento %i que foi procurado, está alocado na posição [%d]\n\n",bag->data[contador],contador);
       return 1; //Pesquisa por um elemento na bag e mostra onde foi alocado
    }
  
return 0;
}
int size(Bag *bag)
{ // Mostra tamanho da bag
    printf("Quantidade de elementos inseridos em bag %i\n", bag->size);
return 0;
}
void printAll(Bag *bag) {
     for(int contador = 0; contador < bag->n; contador++)
     if(bag->data[contador]!= 0)
     printf("Elementos de bag[%i] = %i\n",contador,bag->data[contador]);
    //Printa todos elementos pertencentes a bag
    
}
