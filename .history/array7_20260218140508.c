#include <stdio.h>
int main()
{
    int arr[10];
    int i, min, max,sum=0;
    float avg;

    printf("\nEnter any 10 elemts in array:");
    for (i=0; i<10;i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
  
    avg = sum/10;
    Printf("\nSalaries greater than avg salaries:");
    
   for(int i=0; i<10;i++)
   {
      if(arr[i]>avg)
      {
        printf(arr[i],);
      }
   }
    return 0;
}