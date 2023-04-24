#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[6],i;
	for(i=0;i<6;i++){
		printf("Insira o %dº valor par ", i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]%2!=0){
			printf("Insira um valor par\n");
			i=i-1;
		} else{	}
		
	}
	for(i=5;i>=0;i--){
		
		printf("%d\n",vetor[i]);
	}
	}

