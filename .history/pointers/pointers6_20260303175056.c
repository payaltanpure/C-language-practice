#include <stdio.h>
#define MAX 100

void createarray(int , int);
void displayarray(int);

int main()
{

    int no;

    printf("Enter size of array: ");
    scanf("%d", &no);

    int arr[MAX];   // Variable Length Array (C99)

    createarray(no, arr[MAX]);
    displayarray(arr[MAX])
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