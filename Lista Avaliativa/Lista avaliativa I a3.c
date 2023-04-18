#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL,"");
	int vetor1[10],vetor2[10],x;
	for(x=0;x<10;x++){
		printf("Insira o valor pra ser armazenado no índice %d : \n",x);
		scanf("%d",&vetor1[x]);
		vetor2[x] = vetor1[x]*vetor1[x];
		system("cls");
	}
	for(x=0;x<10;x++){
		printf("%d    e    %d\n",vetor1[x],vetor2[x]);
	}
}
