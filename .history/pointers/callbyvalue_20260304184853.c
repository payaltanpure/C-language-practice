#include <stdio.h>
callbyvalue(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;

}
int main()
{
    int a =10, b =20;
    printf("\nValues before calling:%d and b : %d", a,b);
    callbyvalue(a,b);
    printf("\nValues after calling:%d and b : %d", a,b);
    return 0;
}