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
            if(i==1)
            {
               printf("%c" , 'a'+ j-1);   
            }    
            else if (i==2)
            {
                printf("%c" , 'h'- 4-j);  
            }
            else if (i==3)
            {
                printf("%c" , 'i'+ j-1);  
            }
            else if (i==4)
            {
                printf("%c" , 'p'- 4-j);  
            }
        }
        printf("\n");
    }
    return 0;
}