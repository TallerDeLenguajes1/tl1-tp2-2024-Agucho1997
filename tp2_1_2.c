#include <stdio.h>

// codigo a completar
#define N 20

int main(){
    int i;
    double vt[N];
    double *ptr = vt; //apunto al primer elemento del puntero
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%f ", *ptr);
        ptr++;
    }
    return 0;
}