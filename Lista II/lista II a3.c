#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1,n2,n3;
	printf("digite um número");
	scanf("%d", &n1);
	printf("digite outro número");
	scanf("%d", &n2);
	printf("digite outro número");
	scanf("%d", &n3);
	system("cls");
	if((n1>n2>n3)||(n1>n3>n2)||(n1>n2==n3)){
		printf("O primeiro número(%d) é o maior entre os três", n1);//n1 é o maior
	} else if ((n2>n1>n3)||(n2>n3>n1)||(n2>n1==n3)){
		printf("O segundo número(%d) é o maior entre os três", n2);//n2 é o maior
	} else if((n3>n2>n1)||(n3>n1>n2)||(n3>n2==n1)){
		printf("O terceiro número(%d) é o maior entre os três", n3);//n3 é o maior
	} else if(n1==n2==n3){
		printf("Os três números são iguais");
	}else{
		printf("Complicado");
	}
	
}
