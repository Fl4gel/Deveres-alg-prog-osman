#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Maior printf("� maior de idade")
#define Menor printf("� menor de idade")
int main(void){
	setlocale(LC_ALL,"");
	int idade1, idade2;
	char nome1,nome2;
	printf("Digite o primeiro nome : ");
	scanf(" %s", &nome1);
	printf("Digite o segundo nome : ");
	scanf(" %s", &nome2);
	printf("Digite a idade da primeira pessoa : ");
	scanf("%d", &idade1);
	printf("Digite a idade da segunda pessoa : ");
	scanf("%d", &idade2);
	if(idade1>=18){
		printf("A primeira pessoa � maior de idade\n");
	}else{
		printf("A primeira pessoa n�o � maior de idade\n");
	}
	if(idade2>=18){
		printf("A segunda pessoa � maior de idade");
		
	}else{
		printf("A segunda pessoa n�o � maior de idade");
	}
}
