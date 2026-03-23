#include <stdio.h>
void callbyvalue(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("\nCall by value a:%d and b:%d", a,b);
}
void callbyref(int *a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("\nCall by value a:%d and b:%d", a,b);
}
int main()
{
    int a =10, b =20;
    printf("\nValues before calling:%d and b :%d", a,b);
    callbyvalue(a,b);
    printf("\nValues after calling:%d and b :%d", a,b);
    return 0;
}