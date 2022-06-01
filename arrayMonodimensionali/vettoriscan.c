#include <stdio.h>
#define N 5

int main() {

    int a[N], i, j;

    for (i = 0; i < N; i++) {
        printf("inserire dato allocazione memoria numero %d : ", i);
        scanf("%d", &a[i]);

    }
    for (j = 0; j < N; j++) {
        printf("dato allocazione memoria numero %d : ", j);
        printf("%d\n", a[j]);
       
    }
}