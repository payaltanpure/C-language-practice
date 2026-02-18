#include <stdio.h>
int main()
{
    int arr[5],i;
    int 

    printf("\nEnter any 10 elemts in array:");
    for (i=0; i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    
  
    avg = sum/10;
    printf("\nSalaries greater than avg salaries:");
    
   for(int i=0; i<10;i++)
   {
      if(arr[i]>avg)
      {
        printf("%5d",arr[i]);
      }
   }
    return 0;
}