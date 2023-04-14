#include <stdio.h>
#include <stdlib.h>
#define media(p1,p2,p3,p4) (p1+p2+p3+p4)/4
int main(void){
	int p1,p2,p3,p4;
	float mediat;
	float soma,multi,subt,divis;
	printf("Digite o primeiro valor : ");
	scanf("%d", &p1);
	printf("Digite o segundo valor : ");
	scanf("%d", &p2);
	printf("Digite o terceiro valor : ");
	scanf("%d", &p3);
	printf("Digite o quarto valor : ");
	scanf("%d", &p4);
	mediat = media(p1,p2,p3,p4);
	printf("A media deu : %f", mediat);
}
