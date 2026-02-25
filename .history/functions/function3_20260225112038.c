#include <stdio.h>
void adddata(int a, int b) 
{
    int add;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    add= num1+num2;
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

