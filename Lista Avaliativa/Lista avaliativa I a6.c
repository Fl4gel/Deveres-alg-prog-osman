#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int vetor[10],x,maior=0,menor=0;
	for(x=0;x<10;x++){
	    printf("Insira o valor do índice %d : ",x);
		scanf("%d",&vetor[x]);
		if(vetor[x]>vetor[x-1]){
		  maior =vetor[x];
		}else if(vetor[x]>vetor[x-1]){
			menor = vetor[x];
		}else{
		}
	} printf("O maior vetor foi %d e o menor foi %d",maior,menor);
}
