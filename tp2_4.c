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

void generacionDeDatos(compu pcs[], int cantidad);
void listarPCs(compu pcs[], int cantidad);
void mostrarMasVieja(compu pcs[], int cantidad);


int main() {

    srand(time(NULL));
    compu pcs[CANTIDAD];

    generacionDeDatos(pcs, CANTIDAD);
    listarPCs(pcs, CANTIDAD);
    mostrarMasVieja(pcs, CANTIDAD);

    return 0;
}

void generacionDeDatos(compu pcs[], int cantidad){
    for (int i = 0; i < cantidad ; i++) {
        pcs[i].velocidad = 1 + rand() % 3;
        pcs[i].anio = 2015 + rand() % 10;
        pcs[i].cantidad_nucleos = 1 + rand() & 8;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
}

void listarPCs(compu pcs[], int cantidad){
    printf("\nLista de PCs\n");
    for(int i = 0; i < cantidad; i++){
        printf("Pc -%d:\n", i+1);
        printf("Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("Año: %d\n", pcs[i].anio);
        printf("Nucleos: %d\n", pcs[i].cantidad_nucleos);
        printf("Tipo de CPU: %s\n", pcs[i].tipo_cpu);
    }
}

void mostrarMasVieja(compu pcs[], int cantidad){
    int j = 0;
    for(int i = 0; i < cantidad; i++){
        if(pcs[i].anio < pcs[j].anio){
            j = i;
        }
    }
    printf("\nPC más vieja:\n");
    printf("Velocidad: %d GHz\n", pcs[j].velocidad);
    printf("Año: %d\n", pcs[j].anio);
    printf("Nucleos: %d\n", pcs[j].cantidad_nucleos);
    printf("Tipo de CPU: %s\n", pcs[j].tipo_cpu);
}