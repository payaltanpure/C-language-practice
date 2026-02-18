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
    
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }
        else if(arr[i]>max)  
        {
            max= arr[i];
        }
    }
    printf("\nMax element is:%d", max);
    printf("\nMin element is:%d", min);
    printf("\nSum of element is:%d", sum);
    printf("\nAverage element is:%f", avg);

    return 0;
}