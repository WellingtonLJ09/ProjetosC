#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int *ptr;
  printf("Endereço: %p \n \n", ptr);
  ptr = (int *)malloc(sizeof(int));
  printf("Endereço: %p \nValor: %d\n\n", ptr, *ptr);
  *ptr = 10;
  printf("Endereço: %p \nValor: %d\n\n", ptr, *ptr);

  int x;
  x = 20;
  ptr = &x;
  printf("Endereço: %p \nValor: %d\n\n", ptr, *ptr);
  ptr = (int *)malloc(sizeof(int));
  printf("Endereço: %p \nValor: %d\n\n", ptr, *ptr);

  system("Pause");
  return (0);
}