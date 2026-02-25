#include <stdio.h>
void adddata(); //declaration
int main()
{
   adddata(); // calling
   return 0;
}
void adddata()
{
    int num1, num2 , add;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    add= num1+num2;
    printf("\nAddition is: %d", add);
}
