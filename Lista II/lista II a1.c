#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int nc,ddd;
	printf("Digite o seu n�mero de celular(sem o ddd)\n");
	scanf("%d", &nc);
	printf("Insira os dos d�gitos do seu ddd\n");
	scanf("%d", &ddd);
	switch(ddd){
		case 61:
			printf("Voc� � de bras�lia");
			break;
		case 71:
			printf("Voc� � de salvador");
			break;
		case 11:
			printf("Voc� � de s�o paulo");
			break;
		case 21:
			printf("Voc� � do rio de janeiro");
			break;
		case 32:
			printf("Voc� � de juiz de fora");
			break;
		case 19:
			printf("Voc� � de campinas");
			break;
		case 27:
			printf("Voc� � de vit�ria");
			break;
		case 31:
			printf("Voc� � de belo horizonte");
			break;	
			default:
			printf("Ddd n�o encontrado no BD");
			break;
			}
}
