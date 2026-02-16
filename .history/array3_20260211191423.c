#include <stdio.h>
int main()
{
    int arr[5];
    int i, counteven=0, countodd=0, evensum=0, oddsum=0;
    printf("\nTake user input:");
    for(i=0;i<10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
        {
            counteven++;
            evensum+=arr[i];
        }
        else{
            countodd++;
            oddsum+=arr[i];
        }
    }
    
    printf("\nEven nos:%d", counteven);
    printf("\nOdd nos:%d", countodd);
    printf("\nEven no sum:%d", evensum);
    printf("\nOdd no sum:%d", oddsum);
    return 0;
}