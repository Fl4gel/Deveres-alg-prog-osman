#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	int vetor[8],x,y,i,soma;
	
	for(i=0;i<8;i++){		
	vetor[i] = i+2;
		printf("%d\n",vetor[i]);
	}
	printf("Insira o primeiro valor,entre 0 e 7, a ser somado :");
	scanf("%d", &x);
	printf("\nInsira o segundo valor,entre 0 e 7, a ser somado : ");
	scanf("%d", &y);
	soma = vetor[x] + vetor[y];
	printf("%d",soma);
}
