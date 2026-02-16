#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    printf("\nTake user input:");
    for(i=0;i<10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
        {
          
        }
        else{
            countodd++;
            oddsum+=arr[i];
        }
    }

    return 0;
}