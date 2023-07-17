
//Vinícius Horácio Marques Póvoa

#include <stdio.h>
#include <stdlib.h>

float imc (float n, float m){
    float i = n / (m*m);
    return i;
}

int main()
{   float in, x, y;

    printf("Digite sua massa: (em kg) ");
    scanf("%f", &x);

    printf("Digite sua altura: (em m)");
    scanf("%f", &y);

   in = imc(x, y);

   printf("O seu imc eh: %f", in);


    return 0;
}
