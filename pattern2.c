#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    { 
        for (j=1; j<=n;j++) //to keep row contanst until the row is not to be changed  so j<=n
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}