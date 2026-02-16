#include <stdio.h>
int main()
{
    int arr[10];
    printf("\nTake user input:");
    for(i=0;i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAscending array using user input:");
    for (i=0;i<5;i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}