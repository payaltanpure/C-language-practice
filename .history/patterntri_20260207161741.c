#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++) 
    {
        for (j=1; j<=i;j++)// only chnage j<=i instead of j<=n becoz we want to print * according to rows
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}