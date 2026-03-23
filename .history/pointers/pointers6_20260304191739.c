#include <stdio.h>
#define MAX 100

void createarray(int l, int *ptr)
{
    for(int i = 0; i < l; i++)
        scanf("%d", ptr + i);
}

void displayarray(int l, int *ptr)
{
    for(int i = 0; i < l; i++)
        printf("%d ", *(ptr + i));
}

int main()
{
    int n;
    int arr[MAX];

    printf("Enter size: ");
    scanf("%d", &n);

    createarray(n, &arr[0]);   // array name is pointer
    displayarray(n, arr);

    return 0;
}