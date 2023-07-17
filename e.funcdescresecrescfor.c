
//Exercício 3 - Vinícius Horácio Marques Póvoa - 12121BSI207
#include <stdio.h>
#include <stdlib.h>
int funcao(int n){
 int i;
 printf("Decrescente : ");
 for(i=n; i>= 0; i--)
  printf("%d ", i);
  printf("\n");
    return funcao;
}

int funcaoc(int a){
 int i;
 printf("Crescente : ");
 for(i=0; i<= a; i++)
  printf("%d ", i);
    return funcaoc;
}

int main()
{
   int x, n, fc,fcre;
    printf("Digite o valor de N:\n");
    scanf("%d", &x);
    fc = funcao(x);
    fcre = funcaoc(x);


    return 0;
}
