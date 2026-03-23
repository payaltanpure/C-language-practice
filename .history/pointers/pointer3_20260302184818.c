#include <stdio.h>
int main()
{
    int arr[5]= {10,20, 30, 40 ,50};
    int *ptr= &arr[0];

    printf("\n%d", *ptr);
    printf("\n%d", *(ptr+1));
    return 0;
}