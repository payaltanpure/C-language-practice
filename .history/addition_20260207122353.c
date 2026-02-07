#include <stdio.h>

int main()
{
    int num1, num2, add,sub,mul;//variable declaration, requirement gathering
    float div;
    printf("Enter two numbers for addition:");
    scanf("%d %d", &num1, &num2);//input %d: int, %f:float, %c:char, %s:string
    add= num1 + num2;//calcualtion
    sub= num1- num2;
    mul= num1*num2;
    div= num1/num2;
    printf("\nThe addition of %d and %d is : %d", num1, num2, add);//output
    printf("\nThe addition of %d and %d is : %d", num1, num2, sub );
    printf("\nThe addition of %d and %d is : %d", num1, num2, mul);
    printf("\nThe addition of %d and %d is : %f", num1, num2, div);
    return 0;
}
