#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int tam;
  int *vetor;
  printf("Escola o tamanho do vetor: ");
  scanf("%d", &tam);
  vetor = (int *) malloc(sizeof (int) *tam);
  for(int i = 0; i < tam; i++){
        vetor[i] = pow(2,1);
    printf("Posição %d: %d\n", i , vetor[i]);
  }
  system ("Pause");
  return(0);
}