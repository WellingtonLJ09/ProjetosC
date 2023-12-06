#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int notas[2][3];
	int i,j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("Digite a nota do aluno %d da prova %d: \n", (i+1), (j+1));
			fflush(stdin);
			scanf("%d", &notas[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d", notas[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<2; i++){
		int media = 0;
		for(j=0; j<3; j++){
			media = media + notas[i][j];
		}
		printf("A média do Aluno %d é: %d \n", (i+1), (media/3));
	}
	
	
}
