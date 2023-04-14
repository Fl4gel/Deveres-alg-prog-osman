#include <stdio.h>
#include <stdlib.h>
long fatorial(int n);
int main(void){
	int num=1,prenum;
	while(num){
		printf("\nDigite um numero entre 30 e 33: ");
		scanf("%d", &prenum);
		if((prenum<30)||(prenum>33)){
			printf("Número não aceito");
			system("pause");
			void exit(int status);
		}else{		
		int num = prenum;
		printf("Fatorial = %1d",fatorial(num));
		}
	} getchar();
}


long fatorial(int n){
	if (n==0) return (1);
	else
	return( fatorial(n-1)* n );
}
