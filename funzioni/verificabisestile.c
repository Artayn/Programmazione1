#include <stdio.h>

void bisestile(int anno) {
    if ((anno % 100) == 0) {
        if ((anno % 400) == 0) {
        printf("bisestile!\n");
        }else
            printf("anno non bisestile\n");
    }else if ((anno % 4) == 0) {
        printf("bisestile!\n");
    }else
        printf("anno non bisestile\n");
}


int main(void) {
    int anno;
    
    printf("Inserire l'anno da verificare: ");
    scanf("%d", &anno);
    bisestile(anno);
    return 0;
}