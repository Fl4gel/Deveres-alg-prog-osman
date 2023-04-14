#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float Salario, VPE;
	printf("Insira o salário do trabalhador:\n");
	scanf("%f", &Salario);
	system("cls");
	printf("QUal o valor da prestação do empréstio?\n");
	scanf("%f", &VPE);
	if (VPE>(Salario*0.2)){
	   printf("Empréstimo não concedido");
	}else{
	   printf("Empréstimo concedido");}
}




