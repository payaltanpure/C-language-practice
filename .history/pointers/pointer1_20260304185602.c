#include <stdio.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr= &n;
    printf("\nValue of n is:%d",n);
    printf("\nAddress of n is:%u",&n);
 
    printf("\nValue of n using pointer is:%d",*ptr);
    printf("\nAddress of using pointer n is:%u",ptr);

    *ptr= 30;
    printf("\nupdated Value of n is:%d",n);

    return 0;
}