//Vinícius Horácio Marques Póvoa


#include <stdio.h>
#include <stdlib.h>

void cres(int n)
{

    if (n >= 0)
    {
        cres (n-1);
        printf("%d", n);
    }
}
void decres(int n)
{

    if (n >= 0)
    {
        printf("%d", n);
        decres(n-1);
    }
}
int main()
{
    int n;
    printf("Digite o valor de N");
    scanf("%d", &n);
    printf("\n Crescente: ");
    cres(n);
    printf("\n Decrescente: ");
    decres(n);
}
