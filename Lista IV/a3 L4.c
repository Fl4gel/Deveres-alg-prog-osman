#include <stdio.h>
#include <stdlib.h>

int main (void){
	int matriz[4][4];
	int x=0,y=0,mult;
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
	mult = matriz[0][1] * matriz[1][1] * matriz[2][1] * matriz[3][1];
	printf("A soma total da linha 2 foi: %d", mult);
}
