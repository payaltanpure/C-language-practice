#include <stdio.h>
#define MAX 100



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

