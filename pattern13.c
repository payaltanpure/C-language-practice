#include <stdio.h>
int main()
{
    int i, j , n ,a =97;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    { 
        for (j=1; j<=n;j++) 
        {
            printf("%c \t",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}