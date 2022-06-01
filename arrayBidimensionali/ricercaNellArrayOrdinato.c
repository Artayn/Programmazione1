#include <stdio.h>

int ricercaordinata(int a[], int n, int elem) {
    int i = 0; 
    int trovato = 0;

    while (i < n && !trovato) {                     //visita finalizzata 
        if (a[i] >= elem) {
            trovato = 1;
        }
        else i++;                            //permette di uscire dal ciclo
    }
    if (i == n || a[i] > elem) {
        return -1;
    }
    return (i);
}
