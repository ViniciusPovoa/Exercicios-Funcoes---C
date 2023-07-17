//Exercício 5
//Vinícius Horácio Marques Póvoa

#include <stdio.h>
#include <stdlib.h>
int FibonacciRecursivo(int n){
    if(n == 1)
        return 0;
    else{
    if(n == 2)
        return 1;
    else
        return FibonacciRecursivo(n - 1) + FibonacciRecursivo(n - 2);
    }
}
int FibonacciIterativo(int n){
    int a = 0, b = 1, c;
    int i = 2;
    if(n == 1)
        return a;
    else{
        if(n == 2)
        return b;
    else{
        while(i < n){
        c = a + b;
        a = b;
        b = c;
        i++;
            }
        return c;
        }
    }
}
int main( )
{
 int i;
    for (i = 1; i < 100; i++)
        printf("\n termo %d: %d", i, FibonacciRecursivo (i));
    for (i = 1; i < 100; i++)
        printf("\n termo %d: %d", i, FibonacciIterativo (i));
    return 0;

    }

    //O tempo de execução da função Fibonacci Iterativa é muito menor
    // do que a função Fibonacci Recursiva, sendo assim, é mais viável
    // utilizar a função Iterativa, visto que é extremamente mais rápida
    // do que a Recursiva.
