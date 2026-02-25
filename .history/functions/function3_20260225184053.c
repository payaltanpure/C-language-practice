#include <stdio.h>
void adddata(int a, int b)  //function 
{
    int add;
    add= a +b;
    printf("\nAddition is: %d", add);
}
int main()
{
   int a, b;
   printf("\n Enter any two nos:");
   scanf("%d%d", &a, &b);
   adddata( a, b); 
   return 0;
}

