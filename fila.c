#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tamanho 5

//Defininindo a estrutura
struct tfila{
	int dados[tamanho];
	int ini;
	int fim;
};

//Definindo variavel global
struct tfila fila;
int op;

//prototipação
void mostrar_menu();
void mostrar_fila();
void inserir_valor();
void retirar_valor();

//Função principal
int main(){
	setlocale(LC_ALL, "Portuguese");
	op = 1;
	fila.ini = 0;
	fila.fim = 0;
	while(op !=0){
		system("cls");
		mostrar_fila();
		mostrar_menu();
		scanf("%d", &op);
		switch(op){
			case 1:
				inserir_valor();
			break;
			case 2:
				retirar_valor();
			break;
		}
	}
	return (0);
}

//Adicionando Valor ao final da fila
void inserir_valor(){
	if (fila.fim == tamanho){
		printf("Fila cheia\n");
		system("pause");
	}
	else{
	printf("\nDigite um valor: ");
	scanf("%d", &fila.dados[fila.fim]);
	fila.fim ++;
	}
}

void retirar_valor(){
	if(fila.fim == fila.ini){
		printf("Fila Vazia\n");
		system("pause");
	}
	int i;
	for(i = 0; i < tamanho; i++) {
		fila.dados[i] = fila.dados[i+1];
	}
	fila.dados[fila.fim] = 0;
	fila.fim--;
	
}

void mostrar_fila(){
	int i;
	printf("[ ");
	for(i = 0; i < tamanho; i++){
		printf("%d ", fila.dados[i]);
	}
	printf(" ]\n\n");
}

void mostrar_menu(){
	printf("\nEscolha a opção: \n");
	printf("\n1 - Inserir valor a fila");
	printf("\n2 - Retirar valor da fila");
	printf("\n0 - Sair\n\n");
};