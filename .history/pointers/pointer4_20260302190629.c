#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr[]= arr[0];
    for(int i=0; i<10;i++)
    {
        scanf("%d", ptr[i]);
    }
     for(int i=0; i<=4;i++)
     {
        printf("\n%d", *(ptr+i));
     }

    
      
    return 0;
}