#include <stdio.h>
#define N 5

void swap(int *a, int *b) {
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a[N], i, j;

    for (i = 0; i < N; i++) {
        printf("inserire dato allocazione memoria numero %d : ", i);
        scanf("%d", &a[i]);

    }
    
    swap(&a[0], &a[4]);

    for (j = 0; j < N; j++) {
        printf("dato allocazione memoria numero %d : ", j);
        printf("%d\n", a[j]);
       
    }    
}