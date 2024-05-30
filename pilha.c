#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho  10

//#Criando estrutura
struct tpilha {
	int dados [tamanho];
	int ini;
	int fim;
};

//Definindo Variavel Global
struct tpilha pilha;
int op;

//prototipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//função principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while(op != 0){
		system("cls");
		pilha_mostrar();
		menu_mostrar();
		scanf("%d", &op);
		switch (op){
			case 1:
				pilha_entrar();
			break;
			
			case 2:
				pilha_sair();
			break;
		 }
		}
		return (0);
}

//Adicionar um elemento no final da pilha
void pilha_entrar(){
	if(pilha.fim == tamanho){
		printf("\nA pilha está cheia, impossivel empilhar!\n\n");
		system("pause");
	}
	else{
		printf("\nDigite o valor a ser empilhado: ");
		scanf("%d", &pilha.dados[pilha.fim]);
		pilha.fim++;
	}
}

//Retirar um elemento da pilha
void pilha_sair(){
	if(pilha.fim == pilha.ini){
		printf("\nA pilha está vazia, impossivel desempilhar!\n\n");
		system("pause");
	}
	else{
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim--;
	}
}

//Mostrar o conteúdo da Pilha
void pilha_mostrar(){
	int i;
	printf("[ ");
	for(i = 0; i < tamanho; i++){
		printf("%d", pilha.dados[i]);
	}
	printf(" ]\n\n");
}

//Mostrar o menu de opções
void menu_mostrar(){
	printf("\nEscolha uma opção:\n");
	printf("1 - Adicionar valor a pilha\n");
	printf("2 - Retirar valor da pilha\n");
	printf("0 - Sair\n");
}