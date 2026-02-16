#include <stdio.h>
int main()
{
    int n=4;
    
    //non rev pyramid
    for (int i=97; i<=n;i++)
    {

        char ch ='a';
        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        for (int j =1; j<=2*i-1; j++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");

    }
    //reverse pyramid
    for (int i=n-1; i>=1;i--) //i=n-1 becoz to avoid repeatation of last row of first pyramid
    {
        int c='a';
        //for spaces
        for (int k=n-i; k>0; k--)
        {
            printf(" ");
        }
        for (int j =1; j<=2*i-1; j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");

    }
    return 0;
}