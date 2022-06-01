//programma che legge i voti di una classe e li stampa invertiti 
#include <stdio.h>
#define N 50

int getlista(int lista[]) {
    int i, n = 0;

    for (i = 0; i < N; i++) {
        printf("Prossimo voto:\n");
        scanf("%d", &lista[i]);

        if (lista[i] == -1) break;

        n++;
    }

    return n;
}

void reverse(int lista[], int n) {
    int i, temp;

    for (i = 0; i < n/2; i++) {
        temp = lista[i];
        lista[i] = lista[n - 1 - i];
        lista[n - 1 - i] = temp; 
    }
}

void printlista(int lista[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d\n", lista[i]);
    }
}

int main() {
    int lista[N], n;

    printf("Inserire i voti della classe:\n");

    n = getlista(lista);
    reverse(lista, n);

    printf("Lista voti classe invertita:\n");
    printlista(lista, n);

    return 0;

}