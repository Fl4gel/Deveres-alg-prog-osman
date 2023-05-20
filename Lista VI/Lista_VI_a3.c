#include <stdio.h>

int main(void){
	int*P,N;
	printf("Insira um numero inteiro ");
	scanf("%d",&N);
	P = &N;
	printf("Valor do incial do ponteiro : %d\n",*P);
	*P = *P + 15;
	printf("Valor apos atribuicao : %d\n",*P);
	
}
