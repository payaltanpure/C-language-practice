#include <stdio.h>
int main()
{
    int arr[5]= {10, 20, 30, 40 ,50};
    int i;

    printf("\nPrint single elemnet at a time");
    printf("\n%d", arr[0]);
    printf("\n%d", arr[1]);
    printf("\n%d", arr[2]);
    printf("\n%d", arr[3]);
    printf("\n%d", arr[4]);
    printf("\nAscending array");
    for (i=0;i<5;i++)
    {
        printf("\n%d", arr[i]);
    }
    printf("\nReverse array");
    for (i=4;i>=0;i--)
    {
        printf("\n%d", arr[i]);
    }

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

    printf("\nEnter amount of no u want to enter in the array:");
    scanf("%d")
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