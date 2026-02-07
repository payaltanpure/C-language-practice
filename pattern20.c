#include <stdio.h>
int main()
{
    int i, j , n ;
    printf("\nEnter the value or rows:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    { 
        for (j=1; j<=n;j++) 
        {
            if (i%2==0)
            {
                if (j==1 | j==4)
                {
                    printf(" a");
                }
                else
                {
                    printf(" b");
                }
                
            }
            else 
            {
                if (j==1 | j==4)
                {
                    printf(" b");
                }
                else
                {
                    printf(" a");
                }
            }
            
            
        }
        printf("\n");
    }
    return 0;
}