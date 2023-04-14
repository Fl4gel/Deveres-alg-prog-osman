#include <stdio.h>
#include <stdlib.h>

int main (void){
	int matriz[4][4];
	int x=0,y=0,soma1,soma2;
	float media;
	
	matriz[0][0] = 45;
	matriz[0][1] = 32;
	matriz[0][2] = 83;
	matriz[0][3] = 95;
	matriz[1][0] = 26;
	matriz[1][1] = 14;
	matriz[1][2] = 37;
	matriz[1][3] = 42;
	matriz[2][0] = 40;
	matriz[2][1] = 43;
	matriz[2][2] = 65;
	matriz[2][3] = 77;
	matriz[3][0] = 74;
	matriz[3][1] = 79;
	matriz[3][2] = 48;
	matriz[3][3] = 55;
	soma 1 = matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3];
    soma 2 = matriz[3][0] + matriz[3][1] + matriz[3][2] + matriz[3][3];
    if (soma1)>(soma2){
	printf("A soma dos valores da linha um é maior que a da segunda linha");
	}else{
		printf("A soma dos valores da seunda linha é maior que a primeira");
	}


}
