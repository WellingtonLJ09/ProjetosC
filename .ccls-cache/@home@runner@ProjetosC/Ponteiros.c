#include <stdio.h>
#include <stdlib.h>

int xi;
int *ptr_xi;

void imprimir() {
  printf("Valor de xi = %d \n", xi);
  printf("Valor de &xi = %p \n", &xi);
  printf("Valor de ptr_xi = %p \n", ptr_xi);
  printf("Valor de *ptr_xi = %d \n\n", *ptr_xi);
}

int main() {
  xi = 10;
  ptr_xi = &xi;
  imprimir();

  xi = 20; // alterado o valor do xi.
  imprimir();

  *ptr_xi = 30; // alterado o valor do ponteiro que aponta para xi.
  imprimir();

  system("Pause");
  return (0);
}