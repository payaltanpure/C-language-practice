#include <stdio.h>
int main()
{
    int arr[5];
    int i, n , flag=0;
    
    printf("\nTake user input:");
    for(i=0;i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the no to be searched:");
    scanf("%d", &n);
    for(i=0;i<5; i++)
    {
        if(arr[i]==n)
        {
           flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("\nNumber is found in array");
    }
    else
    {
         printf("\nNumber is not found in array");
    }
    return 0;
}