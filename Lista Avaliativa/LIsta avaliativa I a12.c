#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[5],i,Maiorv=0,Menorv,soma=0;
	float media;
	for(i=0;i<5;i++){
		printf("Insira o %dº valor : ",i+1);
		scanf("%d",&vetor[i]);
		Menorv=vetor[0];
		if(vetor[i]>Maiorv){
			Maiorv= vetor[i];
		}else if(vetor[i]<=Menorv){
		    Menorv=(Menorv-Menorv) +vetor[i];
		}
		soma+= vetor[i];
	}
	 media = soma/5;
	 for(i=0;i<5;i++){
	 	printf("%d ",vetor[i]);
	 }
	printf("O maior valor foi %d\nO menor valor foi %d\nA média foi %.2f",Maiorv,Menorv,media);
}
