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
            if ((i+j)%2==0)      
            {
                printf("%c\t",'$');
            }
            else 
            {  
                printf("%c\t",'#');  
            }
            
        }
        printf("\n");
    }
    return 0;
}