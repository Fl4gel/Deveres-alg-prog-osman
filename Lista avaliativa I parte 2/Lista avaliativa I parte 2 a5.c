#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores. Exemplo: 
Os divisores do n�mero 66 s�o: 1, 2, 3, 6, 11, 22, 33 e 66.*/ 

int main(void){
	setlocale(LC_ALL,"");
	int numero,i;
	printf("Insira um n�mero inteiro : ");
	scanf("%d", &numero);
	printf("Todos os divisores de %d s�o : ",numero);
	for(i=1;i<=numero;i++){
		
		if((numero%i) == 0){
			
			printf("\n%d\n",i);
			
		}else{ 
		}
	}
		return 0 ;
}
