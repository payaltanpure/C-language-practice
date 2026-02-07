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
            if (i%2==0)     //for even line we have print 0 
            {
                printf("%d",0);
            }
            else 
            {  
                printf("%d",1);   //for odd  line we have print 0 
            }
            
        }
        printf("\n");
    }
    return 0;
}