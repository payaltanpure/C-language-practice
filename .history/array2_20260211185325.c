#include <stdio.h>
int main()
{
    int arr[10];
    int i, counteven=0, countodd=0;
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
        else{
            countodd++;
        }
    }
    printf("\nEven nos:", counteven);
    printf("\nEven nos:", counteven);
    return 0;
}