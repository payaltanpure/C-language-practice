#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for (j=i; j<=n;j++) //to keep the row constant until the row is not changed by outer loop so j=i ,  j<=n
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}