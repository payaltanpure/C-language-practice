#include <stdio.h>
void adddata() // fun declaration and  fun declaration
{
    int num1, num2 , add;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    add= num1+num2;
    printf("\nAddition is: %d", add);
}

int main()
{
   adddata(); // fun calling
   return 0;
}
void adddata() // x
