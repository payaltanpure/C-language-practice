#include <stdio.h>
int main()
{
    int i, j , n ;
    char a=1;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=n;i>=1;i--)
    {
        for (j=1; j<=i;j++)
        {
            printf("%c",a);
        }
        a++;
        printf("\n");
    }
    return 0;
}
