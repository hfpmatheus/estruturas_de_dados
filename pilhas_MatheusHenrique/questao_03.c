#include <stdio.h>
#include <string.h>
#define TAMANHO_MAXIMO 100


typedef struct {
  int topo;
  char letras[TAMANHO_MAXIMO];
} Pilha;

Pilha pilha;

void inicializa() {
  pilha.topo = 0;
}

void empilhar(char letra) {
  pilha.letras[pilha.topo] = letra;
  pilha.topo++;
}

char desempilhar() {
  pilha.topo--;
  return pilha.letras[pilha.topo];
}

void exibirPilha() {
  for (int i = pilha.topo - 1; i >= 0; i--)
    printf("%i - %c\n", i, pilha.letras[i]);
}

void palindromo() {
  char entradaDoUsuario[TAMANHO_MAXIMO];
  printf("Digite uma palavra: ");
  scanf("%s", entradaDoUsuario);

  for (int i = 0; i < strlen(entradaDoUsuario); i++)
    empilhar(entradaDoUsuario[i]);

  printf("Palavra Digitada: %s\n", entradaDoUsuario);
  printf("Palavra na Pilha: \n");
  exibirPilha();

  char *resultado = "E um Palindromo";
  for (int i = 0; i < strlen(entradaDoUsuario); i++)
    if (entradaDoUsuario[i] != desempilhar())
      resultado = "Nao e um Palindromo";

  printf("%s\n", resultado);
}

int main() {
  palindromo();
}