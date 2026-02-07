#include <stdio.h>

int main() {
    int i, j, sp;

    for (space = 5; space > i; space--) {
            printf(" ");
        }
    for (i = 5; i >= 1; i--) {      // controls rows
        for (j = 1; j <= i; j++) {  // prints stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
