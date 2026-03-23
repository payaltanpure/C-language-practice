#include <stdio.h>
void display(int *, int);
int main()
{
    int arr[]= {10,20,30,40,50};
    display( &arr[0], 5);
    return 0;
}