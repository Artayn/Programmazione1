#include <stdio.h>

void quadrato_asterischi(int n)  {
    //contatore
    int i, j; 

    i = 0;
    //stampa n righe
    while (i < n) {
        //stampa una riga
        j = 0;
        while (j < n) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}


int main(void) {
    int lato;

    printf("Lato del quadrato? ");
    scanf("%d", &lato);
    quadrato_asterischi(lato);
    return 0;
}