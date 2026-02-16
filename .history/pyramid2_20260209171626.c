#include <stdio.h>
int main()
{
    int n=4;
    int 
    for (int i=n; i>=1;i--)
    {

        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        
        for (int j =1; j<=2*i-1; j++)
        {
            printf("");
        }
        printf("\n");
    }
    return 0;
}