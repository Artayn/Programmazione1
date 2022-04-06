#include <stdio.h>

int main() {
    int mult;

    mult = 1000;

    while (mult > 0) {
        if (mult % 7 == 0) {
            printf("%d ", mult);
        }
        mult--;
    }
}