#include <stdio.h>
void troca(int *n1, int *n2);

int main()
{
    int num1,num2;
  printf("Insira o primeiro numero : ");
  scanf("%d",&num1);
  printf("Insira o segundo numero : ");
  scanf("%d",&num2);
    // address of num1 and num2 is passed
    troca( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}

void troca(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
