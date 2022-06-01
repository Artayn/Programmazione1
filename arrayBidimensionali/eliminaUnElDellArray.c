#include <stdio.h>

int elimina(int a[], int n, int pos) {
    int i;
    
    if (pos < 0 || pos >= n) {              //precondizione 0 <= pos < *n
        return n;
    }
    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];                    //shift a sinistra 
    }
    return n - 1;
}