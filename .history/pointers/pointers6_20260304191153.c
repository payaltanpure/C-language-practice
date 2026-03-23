#include <stdio.h>
#define MAX 100
void createarray(int l, int *arr[MAX])
{
    printf("Enter the array elements:\n");

    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void displayarray(int l,int arr[MAX])
{
    
    printf("Array elements are:\n");

    for(int i = 0; i < l; i++)
    {
        printf("%d ", arr[i]);
    }
}


int main()
{

    int no;

    printf("Enter size of array: ");
    scanf("%d", &no);

    int arr[MAX];   // Variable Length Array (C99)

    createarray(no, &arr[MAX]);
    createarray(no, &arr[MAX]);
    return 0;
}

