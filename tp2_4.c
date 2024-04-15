#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}compu;

void Lista (compu pc);
compu PCvieja(compu pcs[], int n);
compu PCveloz(compu pcs[], int n);
int generarNum (int min, int max);


int main()
{
    srand(time(NULL));
    //inicializando un arreglo de estructuras del tipo compu
    compu pcs[5];
    compu pc;

    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    for (int i = 0; i < 5; i++)
    {
        printf("PC numero %d\n", i+1);
        pc.velocidad = generarNum (1, 3);
        pc.anio = generarNum (2015, 2024);
        pc.cantidad = generarNum (1, 8);
        pc.tipo_cpu = tipos[generarNum (0, 5)];
        pcs[i] = pc;
        Lista(pc);
        printf("-------------\n");
    }

    printf("La pc mas vieja es: \n");
    Lista(PCvieja(pcs, 5));
    printf("La pc mas veloz es: \n");
    Lista(PCveloz(pcs, 5));

    

    return 0;
}

void Lista (compu pc)
{
    printf("velocidad de procesamiento: %d\n", pc.velocidad);
    printf("año de fabricacion: %d\n", pc.anio);
    printf("cantidad de nucleos: %d\n", pc.cantidad);
    printf("tipo de CPU: %s\n",  pc.tipo_cpu);
}

int generarNum(int min, int max) {
    return min + rand() % (max - min + 1);
}

compu PCvieja(compu pcs[], int n) {
    compu PCvieja = pcs[0]; // Suponemos que la primera PC es la más antigua

    // Iteramos sobre las PCs restantes para buscar la más antigua
    for (int i = 1; i < n; i++) {
        if (pcs[i].anio < PCvieja.anio) {
            PCvieja= pcs[i];
        }
    }

    return PCvieja;
}

compu PCveloz(compu pcs[], int n) {
    compu PCveloz = pcs[0]; // Suponemos que la primera PC es la más rapida

    // Iteramos sobre las PCs restantes para buscar la más rapida
    for (int i = 1; i < n; i++) {
        if (pcs[i].velocidad > PCveloz.velocidad) {
           PCveloz= pcs[i];
        }
    }

    return PCveloz;
}