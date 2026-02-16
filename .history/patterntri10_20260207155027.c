#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 5; i >= 1; i--) {
        // print spaces
        for (space = 5; space > i; space--) {
            printf(" ");
        }

        // print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
