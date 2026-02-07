#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (space = 5; space > i; space--) 
    {
        printf(" ");
    }

    for (i=1;i<=n;i++)
    {
        for (j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}