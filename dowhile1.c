#include <stdio.h>
int main()
{
    int a=1;
    int i;
    printf("\nEnter the value how much time u want message to be printed:");
    scanf("%d", &i);
    do 
    {
       printf("\nHello: %d", a);
       a++;
    }
    while(a<=i);
}