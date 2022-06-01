#include <stdio.h>
#define N 10

int ricerca(int a[], int n, int elem) {
    int i = 0;                              //indice dell array /*un break indica se l'elemento è stato trovato
    
    while (i < n) {
        if (a[i] == elem) {                 //visita finalizzata
            break;                          //se trova l'elemento esce dal ciclo
        }
        else i++;                           //se non trovato incrementa l'indice
    }
    if (i == n) {                           //se finita la ricerca l'elemento non è stato trovato restituisce -1
        return -1;
    }                           
    return (i);                             //altrimenti la posizione dell'elemento
}
