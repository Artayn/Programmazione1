#include <stdio.h>

//Stampa di un quadrato vuoto al centro con 2 parametri
void quadrato_asterischi_vuoto(int b, int h)  {
    //contatori
    int i = 1, j; 

    //stampa n righe
    while (i <= h) {

        j = 1;
        //stampa le colonne
        while (j <= b) {

            //stampa le righe piene 
            if ( i == 1 || i == h) {
                printf("*");

            //stampa le colonne vuote    
            }else {
                if (j == 1 || j == b) {
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
    int base, altezza;

    printf("Scegliere i parametri del rettangolo: \nBase: ");
    scanf("%d", &base);
    printf("Altezza: ");
    scanf("%d", &altezza);
    quadrato_asterischi_vuoto(base, altezza);
    return 0;
}