#include <stdio.h>

int inserisci(int a[], int n, int el, int pos) {
    int i;

    if (pos < 0 || pos > n) {
        return n;
    }
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];                //shift a destra
    }
    a[pos] = el;
    return n + 1;
}