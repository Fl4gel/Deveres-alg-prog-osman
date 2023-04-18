#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(Void){
	setlocale(LC_ALL,"");
	int v1,v2,v3,v4,v5,v6;
	printf("Insira o primeiro valor : \n");
	scanf("%d",&v1);
	printf("Insira o segundo valor : \n");
	scanf("%d",&v2);
	printf("Insira o terceiro valor : \n");
	scanf("%d",&v3);
	printf("Insira o quarto valor : \n");
	scanf("%d",&v4);
	printf("Insira o quinto valor : \n");
	scanf("%d",&v5);
	printf("Insira o sexto valor : \n");
	scanf("%d",&v6);
	system("cls");
	printf("Os valores inseridos foram : %d\n%d\n%d\n%d\n%d\n%d\n",v1,v2,v3,v4,v5,v6);
	
}
