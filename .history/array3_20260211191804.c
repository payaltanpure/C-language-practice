#include <stdio.h>
int main()
{
    int arr[5];
    int i, n ;
    
    printf("\nTake user input:");
    for(i=0;i<10; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    printf("\nEnter the no to be searched:");
    scanf("%d", &n);
    return 0;
}