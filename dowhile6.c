#include <stdio.h>
int main()
{
    int i =12, sub=11;
    do 
    {
        sub = sub - i;
        i++;
    } 
    while(i<=20);
    printf("\nsubstraction of natural nos from 11 to 20 is:%d", sub); 
    return 0;
} 