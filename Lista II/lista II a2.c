#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float Salario, VPE;
	printf("Insira o sal�rio do trabalhador:\n");
	scanf("%f", &Salario);
	system("cls");
	printf("QUal o valor da presta��o do empr�stio?\n");
	scanf("%f", &VPE);
	if (VPE>(Salario*0.2)){
	   printf("Empr�stimo n�o concedido");
	}else{
	   printf("Empr�stimo concedido");}
}




