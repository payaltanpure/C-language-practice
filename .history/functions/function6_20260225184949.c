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
    int sub;
    sub= a-b;
    printf("\nSubstraction is: %d", sub);
}
int muldata() 
{
    int num1, num2 ,mul;
    printf("\n Enter any two nos:");
    scanf("%d%d", &num1, & num2);
    mul= num1*num2;
    return mul;
}
float divdata(float a , float b) 
{
    float num1, num2 ;
    float div;
   
    div= num1/num2;
    printf("\nDivision  is: %f", div);
}
int main()
{
   int num1, num2 , sub , mul;
   printf("\n Enter any two nos:");
   scanf("%d%d", &num1, & num2);
   adddata(); // fun calling
   subdata(num1, num2); // fun calling
   mul= muldata(); // fun calling
   printf("\nMultiplication is: %d", mul);
   divdata(); // fun calling
   return 0;
}

