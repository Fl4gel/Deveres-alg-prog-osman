#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1,n2,n3;
	printf("digite um n�mero");
	scanf("%d", &n1);
	printf("digite outro n�mero");
	scanf("%d", &n2);
	printf("digite outro n�mero");
	scanf("%d", &n3);
	system("cls");
	if((n1>n2>n3)||(n1>n3>n2)||(n1>n2==n3)){
		printf("O primeiro n�mero(%d) � o maior entre os tr�s", n1);//n1 � o maior
	} else if ((n2>n1>n3)||(n2>n3>n1)||(n2>n1==n3)){
		printf("O segundo n�mero(%d) � o maior entre os tr�s", n2);//n2 � o maior
	} else if((n3>n2>n1)||(n3>n1>n2)||(n3>n2==n1)){
		printf("O terceiro n�mero(%d) � o maior entre os tr�s", n3);//n3 � o maior
	} else if(n1==n2==n3){
		printf("Os tr�s n�meros s�o iguais");
	}else{
		printf("Complicado");
	}
	
}
