#include <stdio.h>
int main() {
    int n, square, sum = 0, rem;
    printf("Enter number: ");
    scanf("%d", &n);

    square = n * n;

    while (square > 0) {
        rem= square % 10;
        sum+=rem;
        square /= 10;
    }

    if (sum == n)
        printf("Neon Number");
    else
        printf("Not a Neon Number");

    return 0;
}
