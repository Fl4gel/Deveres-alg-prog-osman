#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[10],i,MaiorValor=0,Mv;
	for(i=0;i<10;i++){
		printf("Insira o %dº valor ",i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]>MaiorValor){
		MaiorValor = vetor[i];
		Mv = i;
		}else{
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",vetor[i]);
	}
	printf("O maior valor foi %d e estava na posição %d",MaiorValor,Mv+1);
}
