#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[10],contador=0,x;
	for(x=0;x<10;x++){
		printf("Insira o valor do índice %d : ",x);
		scanf("%d",&vetor[x]);
		if(vetor[x]%2==0){
			contador=contador+1;
		}else{
			contador=contador;
		}}
		printf("A quantidade de números pares foi : %d",contador);
	
}
