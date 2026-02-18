#include <stdio.h>
int main()
{
    int arr[10];
    int i, min, max, avg,sum=0;

    printf("\nEnter any 10 elemts in array:");
    for (i=0; i<10;i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    
    min = arr[0];
    max = arr[0];
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
    printf("\nMax element is:", max);
    printf("\nMin element is:", min);
    printf("\nSum of element is:", sum);
    printf("\nAverage element is:", max);

    return 0;
}