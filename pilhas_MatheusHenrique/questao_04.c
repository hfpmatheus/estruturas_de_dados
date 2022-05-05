#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <time.h>

int main(){

struct spilha pilha;
struct spilha par;
struct spilha impar;
int i;

init(&pilha);

printf("Executando operacao PUSH \n");

srand(time(NULL));

push(&pilha,rand()%100);
push(&pilha,rand()%100);
push(&pilha,rand()%100);
push(&pilha,rand()%100);


printf("\nPercorrendo a Pilha - FOR apenas para fins didaticos \n");

for (i=pilha.topo-1; i>=0; i--)
 { printf("%d\n",pilha.vetor[i]); }
 

printf("\n\n\nNumeros pares\n\n\n");

init(&par);

for(i=0; i<=4;i++){

	if(pilha.vetor[i] % 2 == 0 ){
	push(&par, pilha.vetor[i]);
}
}


for (i=par.topo-1; i>=0; i--)
 { printf("%d\n",par.vetor[i]); }
 
 

printf("\n\n\nNumeros impares\n\n\n");

init(&impar);

for(i=0; i<=4; i++){
	
	if(pilha.vetor[i]%2 != 0){
	 push(&impar, pilha.vetor[i]);
	}
	

}

for (i=impar.topo-1; i>=0; i--)
 { printf("%d\n",impar.vetor[i]); }
 
}