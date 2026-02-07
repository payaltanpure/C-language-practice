#include <stdio.h>
int main()
{
    int i, j , n ,space;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    

    for (i=n;i>=5;i++)
    {

        for (j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}