#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=n;i>=1;i--)
    {
        for (j=1; j<=i;j++)
        {
            if(i%2)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}