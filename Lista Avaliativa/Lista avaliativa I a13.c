#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int vetor[5],i,Maiorv,Mv,Mev,Menorv;
    for(i=0;i<5;i++){
    printf("Insira o %dº valor \n",i+1);
    scanf("%d",&vetor[i]);
      Menorv=vetor[0];
		if(vetor[i]>Maiorv){
			Maiorv= vetor[i];
			Mv = i;
		}else if(vetor[i]<=Menorv){
		    Menorv=(Menorv-Menorv) +vetor[i];
		    Mev = i;
		}
	}	
	printf("O maior valor esta na posição %d\nO menor valor esta na posição %d",Mv+1,Mev+1);
	
}
