#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	float vetor[15], soma=0, media;
	int i;
	for(i=0;i<15;i++){
		printf("Insira a nota da %dº prova ",i+1);
		scanf("%f",&vetor[i]);
		soma = soma + vetor[i];
	}
	media = soma/15;
	printf("A média de todos os alunos foi : %.2f", soma);
}
