#include <stdio.h>
int main()
{
    int arr[10];
    int n, choice, search, flag=0, temp,ct;
  
    menu1:
    printf("\nMenu:");
    printf("\n1.Creating array \n 2.Display array \n 3.Searching element in array \n 4.Sorting array\n 5.Exit");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        printf("\nEnter the no of elemnets to put in array:");
        scanf("%d", &n);
        printf("\nenter array elemnts:");
        for (int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        break;

        case 2:
        printf("\nArray elements are:");
        for (int i=0; i<n;i++)
        {
            printf("%5d", arr[i]);
        }
        break;

        case 3:
        flag=0;
        printf("\nEnter element to be searched:");
        scanf("%d",&search);
        for (int i=0;i<n;i++)
        {
            if(arr[i]==search)
            {
                flag=1;
                break;
            }
        }

        if(flag)
        {
            printf("\nElement found");
        }
        else{
            printf("\nElement not found");
        }
        break;

        case 4:
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1; j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]= arr[j];
                    arr[j] = temp;
                }
            }
            for(int k=0; k<n;k++)
            {
                printf("%5d", arr[k]);
            }
        }
        printf("\nArray elements after sorting:");
        for (int i=0; i<n;i++)
        {
            printf("%5d", arr[i]);
        }
        break;

        case 5:
           printf("\nThankyou");
           return 0;
        
        default:
           printf("\nInvalid data entered");
        

    }
    printf("\nPress 1 to continue and 0 to exit");
    scanf("%d", &ct);
    if(ct==1)
    {
        goto menu1;
    }
    else
    {
        printf()
    }


    return 0;
}