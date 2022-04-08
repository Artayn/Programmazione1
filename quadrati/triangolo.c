#include <stdio.h>

void triangolo(int n) {
    
    int i, j, y, na = 1, ns = 0;

    //righe
    for (i = 0; i < n; i++) {

        //colonne
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }
            
        for (y = 0; y < na; y++) {
            printf("*");
        }

        na = na + 2;
    
    
    printf("\n");
    }     

}


int main() {

    int n;

    scanf("%d", &n);
    triangolo(n);
    return 0;
}