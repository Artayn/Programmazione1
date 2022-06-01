#include <stdio.h>

#define N 10 

int main() {

    int  a[N];  //int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < N; i++) {
        a[i] = i;
        printf("%d\n", a[i]);
    }
}