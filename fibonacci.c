#include <stdio.h>
int main()
{
    int a=0, b=1,c, num=7;
    for (int i=1; i<=num;i++)
    {
        printf("%d \t", a); //prints 0 in first iteration 
        c= a +b; 
        a=b; //swapping  needs to push expected result on a variable 
        b=c;
    }
    return 0;
}

   
