#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define DIFERENCA(p1,p2,p3,p4)  (p1*p2 - p3*p4)
/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = (“valor de DIFERENCA”)*/

int main(void){
	int A,B,C,D;
	printf("Insira o primeiro valor inteiro : \n");
	scanf("%d",&A);
	printf("Insira o segundo valor inteiro : \n");
	scanf("%d",&B);
	printf("Insira o terceiro valor inteiro : \n");
	scanf("%d",&C);
	printf("Insira o quarto valor inteiro : \n");
	scanf("%d",&D);
	printf("DIFERENCA = (%d * %d - %d * %d)\n",A,B,C,D);
	printf("DIFERENCA = %d",DIFERENCA(A,B,C,D));
	
}
