#include <stdio.h>

int main() {
    
    int carta;
    printf("Asso\n");
    for(carta = 13; carta > 1; carta--) {

        switch(carta) {
            case 13: printf("Re\n"); break;
                case 12: printf("Regina\n"); break;
                case 11: printf("Fante\n"); break;
                default: printf("%d\n", carta); break;
        }
    }

    return 0;
}