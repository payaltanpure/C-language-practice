#include <stdio.h>
int main()
{
    int a =10, b =20;
    printf("\nValues before calling:%d and b : %d", a,b);
    callbyvalue(a,b);
    printf("\nValues before calling:%d and b : %d", a,b);
    return 0;
}