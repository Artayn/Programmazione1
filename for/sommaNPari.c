#include <stdio.h>

int somma(int n) {
    int i, somma = 0;


    for (i = 0; i < n; i++) {
        somma += 2 * i;
    }

    printf("%d\n", somma);
}


int main() {
    int n;

    printf("Quanti numeri pari desideri sommare? ");
    scanf("%d", &n);

    somma(n);
}