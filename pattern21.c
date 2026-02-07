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
            if (i%2==0)  // for rows 
            {
                printf("%c" , 'a'+ 4-j); //for dcba
            }
            else 
            {
                
                printf("%c" , 'a'+ j-1); // for abcd
            }
            
            
        }
        printf("\n");
    }
    return 0;
}