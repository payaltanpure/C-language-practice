#include <stdio.h>
int main()
{
    int n=4;
    int ch='a';
    //non rev pyramid
    for (int i=1; i<=n;i++)
    {
        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        for (int j =1; j<=2*i-1; j++)
        {
            printf("%c", i);
        }
        printf("\n");

    }
    //reverse pyramid
    for (int i=n-1; i>=1;i--) //i=n-1 becoz to avoid repeatation of last row of first pyramid
    {
        
        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        for (int j =1; j<=2*i-1; j++)
        {
            printf("%c",i);
        }
        printf("\n");

    }
    return 0;
}