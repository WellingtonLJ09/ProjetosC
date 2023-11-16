# ProjetosC
Evolução de acordo com a Aula
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float num1, num2; 
	int ope;
	printf("Insira o primeiro numero: ");
	scanf("%f", &num1);
	printf("Insira o segundo numero: ");
	scanf("%f", &num2);
	printf("Escolha a operacao basica:\n(1 = +) \n(2 = -) \n(3 = x) \n(4 = /) \n ");
	scanf("%d", &ope);
	if(ope == 1){
		printf("A soma dos numeros e: %.2f", num1+ num2);
	}
	
	if(ope == 2){
		printf("A subtracao dos numeros e: %.2f", num1- num2);
	}
	if(ope == 3){
		printf("A mutiplicação dos numeros e: %.2f", num1* num2);
	}
	if(ope == 4){
		printf("A soma dos numeros e: %.2f", num1/ num2);
	}
	return 0;
}
