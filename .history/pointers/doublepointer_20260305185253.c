#include <stdio.h>
int main()
{
    int a=10, b=20;
    int *ptr1= &a;
    int *ptr2= &b;
    int **dbptr1= &ptr1;
    int **dbptr2= &ptr2;
    **dbptr1+=2;
    ptr1=ptr2;
    *ptr2+=b;
    
    return 0;
}