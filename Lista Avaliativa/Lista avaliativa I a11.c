#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Quantidade de numeros negativos e a soma dos valores positivos
int main(void){
	ssetlocale(LC_ALL,"");
	int vetor[10],i,ContadorDeNegativos=0,soma;
	for(i=0;i<10;i++){
		printf("Insira o %dº valor ",i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]<0){
		   ContadorDeNegativos+=1;
		}else{
			soma+=vetor[i];
			
		}
	}
	printf("A soma foi : %d\nA quantidade de negativos é : %d",soma,ContadorDeNegativos);
}
