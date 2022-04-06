#include <stdio.h>

void triangolo(int n) {
    
    int i, j;

    //righe
    for (j = 0; j < n; j++) {

        //colonne
        for (i = 0; i < n-1; i++) {
            if (i < n-2) {
                printf(" ");
            }
            else {
                for (i = 0; i <= 20; i+2){

                    
                
                    printf("*");
                }
            }
        }
    printf("\n");
    }     

}


int main() {

    int n;

    scanf("%d", &n);
    triangolo(n);
    return 0;
}