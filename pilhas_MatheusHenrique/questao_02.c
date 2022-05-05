#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

struct spilha x;
struct spilha y;
struct spilha z;
int i;

init(&x);

printf("Executando operacao PUSH \n");

push(&x,'A');
push(&x,'B');
push(&x,'C');
push(&x,'D');

printf("\n\n\n");
for (i=x.topo-1; i>=0; i--)
 { printf("%c\n",x.vetor[i]); }



init(&y);

push(&y, pop(&x));
push(&y, pop(&x));
push(&y, pop(&x));
push(&y, pop(&x));

printf("\n\n\n\n");

for (i=y.topo-1; i>=0; i--)
 { printf("%c\n",y.vetor[i]); }


init(&z);

push(&z, pop(&y));
push(&z, pop(&y));
push(&z, pop(&y));
push(&z, pop(&y));

printf("\n\n\n\n");

for (i=z.topo-1; i>=0; i--)
 { printf("%c\n",z.vetor[i]); }

}