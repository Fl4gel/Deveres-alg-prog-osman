#include <stdio.h>
#include <Stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int soma=0, i;
	while(soma<30){
		printf("Insira um número :");
		scanf("%d",&i);
		soma=soma+i;
		system("cls");
		printf("Total %d\n",soma);
	}
	
	
}
