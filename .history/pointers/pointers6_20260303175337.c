#include <stdio.h>
#define MAX 100

void  createarray(no, arr[MAX]);
void displayarray(int,int);

int main()
{

    int no;

    printf("Enter size of array: ");
    scanf("%d", &no);

    int arr[MAX];   // Variable Length Array (C99)

    createarray(no, arr[MAX]);
    displayarray(no ,arr[MAX]);
    return 0;
}

void createarray(int l, int arr[MAX])
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