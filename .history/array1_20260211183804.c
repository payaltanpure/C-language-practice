#include <stdio.h>
int main()
{
    int arr[5]= {10, 20, 30, 40 ,50};
    int i;
    for (i=0;i<5;i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nReverse ")
    for (i=4;i>=0;i--)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}