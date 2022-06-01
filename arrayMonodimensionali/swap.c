#include <stdio.h>

void swap(int *a, int *b) {
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a , b;

    printf("Funzione swap:\nvalore di a: \n");
    scanf("%d", &a);
    
    printf("valore di b: \n");
    scanf("%d", &b);

    swap(&a, &b);

    printf("b = %d\n", b);
    printf("a = %d\n", a);

    return 0;   
}