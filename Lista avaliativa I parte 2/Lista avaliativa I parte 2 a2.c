#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
após a vírgula, segundo a fórmula:*/
int main(void){
	setlocale(LC_ALL,"");
	float x1,x2,y1,y2,distancia;
	printf("Insira o x do primeiro número :");
	scanf("%f",&x1);
	printf("Insira o y do primeiro número :");
	scanf("%f",&y1);
	printf("Insira o x do segundo número :");
	scanf("%f",&x2);
	printf("Insira o y do segundo número :");
	scanf("%f",&y2);
	printf(" %.2f %.2f %.2f %.2f",x1,x2,y1,y2);
	distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("A distancia entre os dois pontos é : %.4f",distancia);
}

