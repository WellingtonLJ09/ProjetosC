//ATIVIDADE SOBRE PONTEIROS, ALOCAÇÃO DINAMICA E VETORES DINAMICOS!


/*1. Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e
alocação dinâmica na memória.
a) Defina um ponteiro do tipo inteiro.
b) Faça alocação dinâmica para o ponteiro recém-criado.
c) Preencha a memória com o valor 42.
d) Imprima o endereço do ponteiro na memória e o valor contido nele.*/

int main(){
	int x;
	int *ptr;
	
	*ptr = x;
	ptr = (int *) malloc(sizeof(int));
	ptr = 42;
	printf("Endeço: %p \nValor: %d", ptr, *ptr);
	
}

/*2. Uma famosa fábrica de semáforos está testando um novo protótipo, menor,
mais barato e eficiente. Foi solicitado à equipe de TI um programa em linguagem C para fazer o teste do novo hardware. O semáforo tem três objetos, cada
um contém um atributo cor e outro id. Devido às limitações de memória e processamento, é necessária a criação de um ponteiro que vai percorrendo a memória 
e imprimindo o valor na tela.
a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id
(inteiro).
b) Crie três variáveis com o tipo definido no item a.
c) Crie um ponteiro do mesmo tipo.
d) Inicialize as estruturas da seguinte forma:
• cor vermelha, id 1.
• cor amarela, id 2.
• cor verde, id 3.
e) Inicialize o ponteiro apontando para a primeira variável criada.
f) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima o valor de cada uma das variáveis criadas nesse programa.*/

#include <stdio.h>
#include <stdlib.h>
struct semafaro {
 char cor[10];
 int id;
};
struct semafaro s1 = {"Vermelho", 1};
struct semafaro s2 = {"Amarelo", 2};
struct semafaro s3 = {"Verde", 3};
struct semafaro *ptr_s;
int main(){
 ptr_s = &s1;
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
 ptr_s = ptr_s + 1;
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
 ptr_s = ptr_s + 1;
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor);
 system("Pause");
 return(0);
}


/*3. Qual a diferença entre uma variável do tipo inteira de um ponteiro do tipo inteiro?*/
Resposta: Uma variável do tipo inteira aponta pra um número inteiro na memória, já um
ponteiro do tipo inteiro aponta para o endereço de um inteiro na memória, seja
o de uma variável estática ou dinâmica.

/*4. Por que devemos preencher um ponteiro apenas com o endereço de uma variável ou por alocação dinâmica usando funções como malloc?*/
Resposta: Porque se tentarmos alocar indiscriminadamente um endereço qualquer a um
ponteiro, corremos o risco de estar manipulando uma área da memória que está
sendo utilizada por outro programa ou até mesmo pelo sistema operacional, o
que pode causar instabilidade no computador

/*5. Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com
o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores
respectivamente com potências de 2 e potências de 3.
a) Crie uma variável inteira e dois ponteiros do tipo inteiro.
b) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável
inteira.
c) Aloque dinamicamente os dois vetores usando a função malloc.
d) Faça um laço de repetição para preencher o primeiro vetor com potências
de 2.
e) Faça um segundo laço de repetição para preencher o outro vetor com potências de 3.
f) Não se esqueça de usar a biblioteca math.h para poder usar o cálculo de
potência (pow).*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int x;
int *ptr1;
int *ptr2;

int main() {
  printf("Qual o valor do vetor dinamico?: \n");
  scanf("%d", &x);

  ptr1 = (int *)malloc(sizeof(int) * x);
  ptr2 = (int *)malloc(sizeof(int) * (x * 2));
  int i;

  printf("Vetor 1: \n");
  for (i = 0; i < x; i++) {
    ptr1[i] = pow(2, i);
    printf("Valor %d: %d\n", i, ptr1[i]);
  }

  printf("\nVetor 2:\n");
  for (i = 0; i < x * 2; i++) {
    ptr2[i] = pow(3, i);
    printf("Valor %d: %d\n", i, ptr2[i]);
  }
}