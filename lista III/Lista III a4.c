#include <stdio.h>
#include <Stdlib.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "");
	 int x,mais18=0,idade[5];
	 float media;
	 for(x=1;x<=5;x++){
	 	printf("Insira a %d� idade ", x);
	 	scanf("%d",&idade[x]);
	 } media = (idade[1] + idade[2] + idade[3] + idade[4] + idade[5])/5;
	 if((idade[x])>18){
	 	mais18=mais18+1;
    }printf("Os maiores de 18 s�o %d\n",mais18);
	 printf("a m�dia foi %f", media);
	
	
}
