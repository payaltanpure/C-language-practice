#include <stdio.h>
int main()
{
    int fact=1;
    int num, i;
    printf("\nEnter the no to find factorial of it:");
    scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        fact= fact*i;
    }
    printf("\n Factorial of %d is %d", num, fact);
    return 0;
}