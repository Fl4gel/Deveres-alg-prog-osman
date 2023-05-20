#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
     setlocale(LC_ALL, "utf-8");
    int *p, n;
    printf("Insira um número : ");
    scanf("%d", &n);
    printf("\nValor da variável : %d\n", n);
    p = &n;
    printf("\nValor do ponteiro : %d", *p);
    system("pause");
}
