#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    
    for (i=n;i>=1;i--)
    {
        int a=1;
        for (j=1; j<=i;j++)
        {
            printf("%d",a);
        }
        a++;
        printf("\n");
    }
    return 0;
}
