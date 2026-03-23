#include <stdio.h>
void callbyvalue(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("\nCall by value a:%d and b:%d", a,b);
}
void callbyref(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
    printf("\nCall by ref a:%d and b:%d", *a,*b);
}
int main()
{
    int a =10, b =20;
    printf("\nValues before calling:%d and b :%d", a,b);
    callbyvalue(a,b);
    printf("\nValues after calling callbyvalue:%d and b :%d", a,b);
    callbyref(&a,&b);
    printf("\nValues after calling callbyref:%d and b :%d", a,b); //a and b changed permanently as we chnaged it using pointer means values changed at original at memory location
    return 0;
}