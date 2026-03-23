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
    *dbptr1= &ptr1;
    printf("\n%d", **dbptr1);
    printf("\n%d", **dbptr2);
    printf("\n%d", *ptr1);
    printf("\n%d", *ptr2);
    printf("\n%d", a);
    return 0;
}