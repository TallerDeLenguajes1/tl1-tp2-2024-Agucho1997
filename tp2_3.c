#include <stdio.h>
#include <stdlib.h>


#define N 5
#define M 7

int main ()
{
int i,j;
int mt[N][M];
int (*ptr)[M]; //declaro un puntero a un arreglo de m columnas
for(i = 0;i<N; i++)
{
    for(j = 0;j<M; j++)
    {
        *(*(ptr + i) + j) = 1 + rand() % 100; // asigno el valor aleatorio utilizando aritmetica de punteros
        printf("%d ", *(*(ptr + i) + j));
    }
    printf("\n");
}

    return 0;
}