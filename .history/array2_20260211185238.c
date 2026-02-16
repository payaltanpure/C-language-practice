#include <stdio.h>
int main()
{
    int arr[10];
    int i, counteven, countodd;
    printf("\nTake user input:");
    for(i=0;i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAscending array using user input:");
    for (i=0;i<10;i++)
    {
        printf("\n%d", arr[i]);
        if(arr[i]%2==0)
        {
            counteven++;
        }
    }
    return 0;
}