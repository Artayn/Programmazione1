#include <stdio.h>

int main() {
    int numeroLato, conteggio;
    
    printf("Inserire numero lato da stampare:\n");
    scanf("%d", &numeroLato);

    conteggio = 0;
}

void stampa_Quadrato(int numeroLato) {
    if (numeroLato >= 0) {
        while (conteggio < numeroLato) {
            conteggio++; 
            
            printf("*\n",);
        }
    }else {
        printf("Il numero inserito non è valido\n");
    }
}