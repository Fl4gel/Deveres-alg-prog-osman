#include <stdio.h>
#include <stdlib.h>
#define somar(p1,p2) (p1 + p2)
#define multiplicar(p1,p2) (p1 * p2)
#define subtrair(p1,p2) (p1 - p2)
#define dividir(p1,p2) (p1 / p2)
int main(void){
	int p1,p2;
	float soma,multi,subt,divis;
	printf("Digite o primeiro valor : ");
	scanf("%d", &p1);
	printf("Digite o segundo valor : ");
	scanf("%d", &p2);
	soma = somar(p1,p2);
	multi = multiplicar(p1,p2);
	subt = subtrair(p1,p2);
	divis = dividir(p1,p2);
	printf("Soma:%.f\nSubtracao:%.f\nMultiplicacao:%.f\ndivisao:%.f",soma,subt,multi,divis);
}
