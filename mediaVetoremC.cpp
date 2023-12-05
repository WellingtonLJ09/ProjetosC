#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	float notas[4], media=0;
	int i;
	
	for(i=0; i<=3; i++){
		printf("Digite a nota %d: \n", i+1);
		scanf("%f", &notas[i]);
	 	media = media + notas[i];
	}
	printf("A média de notas é: %f\n", media/4);

}
