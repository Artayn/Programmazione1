#include <stdio.h>

int main() {
    int pari, dispari;

    pari = 0;
    while (pari <= 1000) {
        if (pari % 2 == 0) {
            printf("%d e' un numero pari\n", pari);
        }else if (dispari % 2 != 0) {
            printf("%d e' un numero dispari\n", dispari);
        }
        pari++;
        dispari++;
    }
}