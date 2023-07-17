//Vinícius Horácio Marques Póvoa

#include <stdio.h>
#include <stdlib.h>



float **aloc(int ia, int ja){
    float **Mat = (float**) malloc (ia * sizeof(float*));
        for(int i=0; i<ia; i++){
            Mat[i] = (float *) malloc (ja * sizeof(float));
        }
        return Mat;
    };

void funcleitura(float **Mat, int ia, int ja){
      for(int i=0;i<ia;i++){
        for(int j=0;j<ja;j++){
            printf("Matriz [%d][%d]: ",i+1,j+1);
            scanf("%f", &Mat[i][j]);
        }
      }
    };

float **multi(float **matA, int ia, int ja, float **matB, int ib, int jb){
    float **matC = aloc(ia, jb);
      for (int i=0;i<ia;i++){
        for (int j=0;j<jb;j++){
            for (int k=0;k<ja;k++){
                matC[i][j] = matC[i][j] + matA[i][k] * matB[k][j];
            }
        }
    }
    return matC;
};

void funcimprimir(float **mat, int ia, int ja){
    printf("\n");
    for (int i=0;i<ia;i++){
        for (int j=0;j<ja;j++){
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }
};

void funcdesaloc(float **mat, int ia){
    for (int i=0;i<ia;i++){
        free(mat[i]);
    }
    free(mat);
}


int main()
{

    float **matA = aloc(2, 3);
    funcleitura(matA, 2, 3);

    float **matB = aloc(3, 4);
    funcleitura(matB, 3, 4);

    float **matC = multi(matA, 2, 3, matB, 3, 4);

    funcimprimir(matA, 2, 3);
    funcimprimir(matB, 3, 4);
    funcimprimir(matC, 2, 4);

    funcdesaloc(matA, 2);
    funcdesaloc(matB, 3);
    funcdesaloc(matC, 2);

    return 0;
}
