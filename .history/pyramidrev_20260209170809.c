#include <stdio.h>
int main()
{
    int n=4;
    for (int i=n; i<=n;i++)
    {

        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        
        for (int j =1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}