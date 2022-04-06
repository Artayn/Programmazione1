#include <stdio.h>

//Stampa di un quadrato vuoto al centro
void quadrato_asterischi_vuoto(int n)  {
    //contatori
    int i, j; 

    i = 1;
    //stampa n righe
    while (i <= n) {

        j = 1;
        //stampa le righe di *
        while (j <= n) {

            //stampa le righe piene 
            if ( i == 1 || i == n) {
                printf("*");

            //stampa le righe vuote    
            }else {
                if (j == 1 || j == n) {
                    printf("*");
                }else 
                    printf(" ");
                }
                j++;
            }
        i++;
        printf("\n");
        }
        
    }


int main(void) {
    int lato;

    printf("Lato del quadrato? ");
    scanf("%d", &lato);
    quadrato_asterischi_vuoto(lato);
    return 0;
}