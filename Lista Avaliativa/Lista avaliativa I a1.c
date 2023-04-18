#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[6],x,soma;
	vetor[0] = 1;
	vetor[1] = 0;
	vetor[2] = 5;
	vetor[3] = -2;
	vetor[4] = -5;
	vetor[5] = 7;
	soma = vetor[0] + vetor[1] + vetor[5];
	printf("A soma dos vetores selecionais é %d\n",soma);
	vetor[4] = 100;
	for(x=0;x<6;x++){
		printf("O vetor %d é %d\n",x,vetor[x]);
	}
}
