#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr= &arr[0];
    int even=0, odd =0;
    printf("\nenter array elemnts:");
    for(int i=0; i<10;i++)
    {
        scanf("%d", (ptr+i));
    }
    printf("\nArray elements are:");
     for(int i=0; i<=4;i++)
     {
        printf("\n%d", *(ptr+i));
     }

    
      
    return 0;
}