#include <stdio.h>

//stampa tutti gli anni bisestili da 1600 a 10000
int main() {
    int anno;

    anno = 1600;

    while (anno < 10000) {
        if ((anno % 100) == 0 && (anno % 400) == 0) {
            printf("%d ", anno);
        }else if ((anno % 4) == 0 && (anno % 100) != 0) {
            printf("%d ", anno);
        }
    anno++;
    }
}