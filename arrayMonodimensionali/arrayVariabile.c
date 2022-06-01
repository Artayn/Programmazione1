#include <stdio.h>
#define N 50

int getlista(int lista[]) {
    int i, n = 0;

    for (i = 0; i < N; i++) {
        printf("Prossimo elemento:\n");
        scanf("%d", &lista[i]);

        if (lista[i] == -1) break;

        n++;
    }

    return n;
}

void printlista(int lista[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d\n", lista[i]);
    }
}

int main() {
    int lista[N], n;

    n = getlista(lista);

    printf("Voti della classe:\n");
    printlista(lista, n);

    return 0;

}