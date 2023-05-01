#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: 
Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/ 

int main(void){
	setlocale(LC_ALL,"");
	int numero,i;
	printf("Insira um número inteiro : ");
	scanf("%d", &numero);
	printf("Todos os divisores de %d são : ",numero);
	for(i=1;i<=numero;i++){
		
		if((numero%i) == 0){
			
			printf("\n%d\n",i);
			
		}else{ 
		}
	}
		return 0 ;
}
