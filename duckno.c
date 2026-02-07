#include <stdio.h>
int main() {
    int n, digit, flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit == 0) {
            flag = 1;
            break;
        }
        n /= 10;
    }

    if (flag ==1)
        printf("Duck Number");
    else
        printf("Not a Duck Number");

    return 0;
}  