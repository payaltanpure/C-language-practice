#include <stdio.h>
void adddata()  //without argument and without return type
{
    int num1, num2 , add;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    add= num1+num2;
    printf("\nAddition is: %d", add);
}
void subdata(int a , int b)  // with argument and without return type
{
    
    sub= num1-num2;
    printf("\nSubstraction is: %d", sub);
}
void muldata() 
{
    int num1, num2 ,mul;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    mul= num1*num2;
    printf("\nMultiplication is: %d", mul);
}
void divdata() 
{
    float num1, num2 ;
    float div;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    div= num1/num2;
    printf("\nDivision  is: %f", div);
}
int main()
{
   adddata(); // fun calling
   subdata(); // fun calling
   muldata(); // fun calling
   divdata(); // fun calling
   return 0;
}

