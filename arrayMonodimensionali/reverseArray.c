//programma che legge una lista di 10 valori, calcola l'inversa e la stampa
#include <stdio.h>
#define N 10

void getlista(int lista[]) {
    int i;

    for (i = 0; i < N; i++) {
        scanf("%d", &lista[i]);
    }
}

void reverse(int lista[]) {
    int i, temp;

    for (i = 0; i < N/2; i++) {
        temp = lista[i];
        lista[i] = lista[N - 1 - i];
        lista[N - 1 - i] = temp; 
    }
}

void printlista(int lista[]) {
    int i;

    for (i = 0; i < N; i++) {
        printf("%d\n", lista[i]);
    }
}

int main() {
    int lista[N];

    getlista(lista);
    reverse(lista);

    printf("La lista inversa è:\n");
    printlista(lista);

    return 0;

}