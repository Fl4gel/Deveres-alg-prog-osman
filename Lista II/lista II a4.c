#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	double media;
	int n1,n2,n3,n4;
	printf("Digite a sua primeira nota\n");
	scanf("%d", &n1);
	system("cls");
	printf("Digite a sua segunda nota\n");
	scanf("%d", &n2);
	system("cls");
	printf("Digite a sua terceira nota\n");
	scanf("%d", &n3);
	system("cls");
	printf("Digite a sua quarta nota\n");
	scanf("%d", &n4);
	system("cls");
	media = (n1+n2+n3+n4)/4;
	if (media<3.1){
	printf("O aluno foi reprovado");
	}else if ((media>3) && (media<7)){
		printf("O aluno est� de recupera��o");
	}else{
		printf("O aluno est� aprovado");
	}
	/*Fa�a um programa em que o usu�rio digite 4 notas, em seguida, calcule e imprima a m�dia e mostre o
resulado de acordo com as seguintes informa��es.
M�dia de 0 at� 3 - Reprovado.
M�dia de 3.1 at� 6.9 � Recupera��o.
M�dia acima de 6.9 � Aprovada.*/
	}
	
	

