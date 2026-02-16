#include <stdio.h>

int main() {
    int i, j, space,n;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        // print spaces
        for (space = n-i; space > 0; space--) { 
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
