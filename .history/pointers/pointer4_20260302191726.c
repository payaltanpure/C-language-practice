#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr
    printf("\nenter array elemnts:");
    for(int i=0; i<10;i++)
    {
        scanf("%d", arr[i]);
        ptr[i]= arr[i];
    }
    printf("\nArray elements are:");
     for(int i=0; i<=4;i++)
     {
        printf("\n%d", *(ptr+i));
     }

    
      
    return 0;
}