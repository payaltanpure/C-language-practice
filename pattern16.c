#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    { int a =97;

        for (j=1; j<=n;j++) 
        {
            printf("%c \t",a);
            a++;
        }
        
        printf("\n");
    }
    return 0;
}