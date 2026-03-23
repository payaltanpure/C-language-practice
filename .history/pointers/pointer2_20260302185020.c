#include <stdio.h>
int main()
{
    int n1= 10;
    int n2= 20;
    int add;

    int *ptr1= &n1;
    int *ptr2= &n2;
    int *ptr3= &add;
    
    *ptr3= *ptr1+*ptr2;
    printf("\n Addition of value is: %d",*ptr1 );
    printf("\n Addition of adresses  is: %u",*ptr3 );
    return 0;
}