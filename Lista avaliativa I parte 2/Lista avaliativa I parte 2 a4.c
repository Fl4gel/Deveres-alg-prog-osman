#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas
de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou
se est� sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem,
escreva a mensagem �Origem�. Se o ponto estiver sobre um dos eixos escreva �Eixo X� ou
�Eixo Y�, conforme for a situa��o.*/
int main(void){
	float x,y;
	printf("Insira o valor do x com duas casas decimais : \n");
	scanf("%f",&x);
	printf("Insira o valor do y com duas casas decimais : \n");
	scanf("%f",&y);
	if(x==0 && y==0){
		printf("Origem");
	}else if(x>0 && y>0){
		printf("O ponto est� no primeiro quadrante");
	}else if(x>0 && y<0){
		printf("O ponto est� no quarto quadrante");
	}else if(x<0 && y>0){
		printf("O ponto est� no segundo quadrante");
	}else if(x<0 && y<0){
		printf("O ponto est� no terceiro quadrante");
	}else if(x==0 && y!=0){
		printf("O ponto est� no eixo y");
	}else if(x!=0 && y==0){
		printf("O ponto est� no eixo x");
	}
	
	
}
