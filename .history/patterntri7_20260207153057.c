#include <stdio.h>
int main()
{
    int i, j , n ;
    char a="A";
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=n;i>=1;i--)
    {
        for (j=1; j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
