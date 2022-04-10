#include <stdio.h>

void triangolo(int n) {
    
    int i, j, y;

    //righe
    for (i = 1; i <= n; i++) {

        //colonne: j conta gli spazi, y conta gli asterischi
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
            
        for (y = 0; y < (2*i)-1; y++) {
            printf("*");
        }

    printf("\n");
    }     

}


int main() {

    int n;

    printf("Inserire l'altezza del triangolo: \n");
    scanf("%d", &n);
    triangolo(n);
    return 0;
}