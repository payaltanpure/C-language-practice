#include <stdio.h>
int main()
{
    int a=10;
    int *ptr1= &a;
    int **dbptr1= &ptr1;
    printf("\n%d", a);
    printf("\n%d",*ptr1);
    printf("\n%d", ptr1);
    printf("\n%d", );
    return 0;
}