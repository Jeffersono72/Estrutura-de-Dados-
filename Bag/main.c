#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bag.h"
int main(){
    srand(time(NULL)); 
Bag *bag = create(4);
insert(bag, 10);
insert(bag, 20);
insert(bag,89);
insert(bag,2);
get(bag);
search(bag,10);
size(bag);
printAll(bag);
return 1;
}
