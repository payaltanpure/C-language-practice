#include <stdio.h>
#define MAX 100

void createarray(int l, int arr[]);

int main()
{

    int no;

    printf("Enter size of array: ");
    scanf("%d", &no);

    int arr[MAX];   // Variable Length Array (C99)

    createarray(no, arr);

    return 0;
}

void createarray(int l, int arr[])
{
    printf("Enter the array elements:\n");

    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }

    
}