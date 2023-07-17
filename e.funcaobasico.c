//Exercício 2
//Vinícius Horácio Marques Póvoa

#include <stdio.h>
#include <stdlib.h>
int funcao(int *n){
    int soma;
    for(int i=1; i<=*n; i++)
        soma = soma + i*i;

    return soma;
}

int main()
{
    int x, n;
    int aux = 0;
    printf("Digite o valor de N:  ");
    scanf("%d", &x);
    funcao(&x);
    aux = funcao(&n);

    printf("A soma dos  numeros inteiros elevados a si proprio eh: %d", aux);
    return 0;
}
