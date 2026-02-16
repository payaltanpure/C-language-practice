#include <stdio.h>

int main()
{
    int arr[10];
    int n = 0, choice, search, flag, temp, ct;
    int created = 0;   // To check array created or not

    while (1)
    {
        printf("\nMenu:");
        printf("\n1.Create array");
        printf("\n2.Display array");
        printf("\n3.Search element");
        printf("\n4.Sort array");
        printf("\n5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter number of elements (max 10): ");
                scanf("%d", &n);

                if(n > 10 || n <= 0)
                {
                    printf("\nInvalid size!");
                    break;
                }

                printf("Enter elements:\n");
                for(int i=0;i<n;i++)
                    scanf("%d",&arr[i]);

                created = 1;
                break;

            case 2:
                if(!created)
                {
                    printf("\nCreate array first!");
                    break;
                }

                printf("\nArray elements:\n");
                for(int i=0;i<n;i++)
                    printf("%5d",arr[i]);
                break;

            case 3:
                if(!created)
                {
                    printf("\nCreate array first!");
                    break;
                }

                flag=0;
                printf("\nEnter element to search: ");
                scanf("%d",&search);

                for(int i=0;i<n;i++)
                {
                    if(arr[i]==search)
                    {
                        printf("\nElement found at position %d", i+1);
                        flag=1;
                        break;
                    }
                }

                if(!flag)
                    printf("\nElement not found");
                break;

            case 4:
                if(!created)
                {
                    printf("\nCreate array first!");
                    break;
                }

                for(int i=0;i<n-1;i++)
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(arr[i]>arr[j])
                        {
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                        }
                    }
                }

                printf("\nSorted array:\n");
                for(int i=0;i<n;i++)
                    printf("%5d",arr[i]);
                break;

            case 5:
                printf("\nThank you!");
                return 0;

            default:
                printf("\nInvalid choice");
        }
    }
}
