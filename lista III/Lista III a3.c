#include <stdio.h>
#include <Stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "");
	int i, x;
	printf("Insira um número : ");
	scanf("%d", &x);
	for(x;x>=0;x--){
	
	printf("%d\n", x);
}}

