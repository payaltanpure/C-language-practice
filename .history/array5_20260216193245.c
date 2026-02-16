#include <stdio.h>
int main()
{
    int arr[10];
    int n, choice, search, flag;
    printf("\nMenu:");
    printf("\n1.Creating array \n 2.Display array \n 3.Searching element in array \n 4.Sorting array");
    print("\nEnter your choice:");
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
        printf("\nNetrr lement to be searched:");
        scanf("%d",&search);
        for (int i=0;i<n;i++)
        {
            if(arr[i]==search)
            {

            }
        }

    }
   

    return 0;
}