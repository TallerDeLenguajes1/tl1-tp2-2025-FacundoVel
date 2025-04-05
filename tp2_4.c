#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define CANTIDAD 5 //numero de computadoras

typedef struct {
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}compu;

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

int main() {

    srand(time(NULL));
    compu pcs[CANTIDAD];


    return 0;
}

