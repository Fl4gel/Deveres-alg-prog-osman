#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int nc,ddd;
	printf("Digite o seu número de celular(sem o ddd)\n");
	scanf("%d", &nc);
	printf("Insira os dos dígitos do seu ddd\n");
	scanf("%d", &ddd);
	switch(ddd){
		case 61:
			printf("Você é de brasília");
			break;
		case 71:
			printf("Você é de salvador");
			break;
		case 11:
			printf("Você é de são paulo");
			break;
		case 21:
			printf("Você é do rio de janeiro");
			break;
		case 32:
			printf("Você é de juiz de fora");
			break;
		case 19:
			printf("Você é de campinas");
			break;
		case 27:
			printf("Você é de vitória");
			break;
		case 31:
			printf("Você é de belo horizonte");
			break;	
			default:
			printf("Ddd não encontrado no BD");
			break;
			}
}
