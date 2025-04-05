#include <stdlib.h>
#include <stdio.h>
#define N 20


int main() {

    int i;
    double vt[N];
    for(i = 0;i<N; i++) {
        *(vt + 1) = 1 + rand()%100;
        printf("%f", *(vt + 1));
    }

    return 0;
}