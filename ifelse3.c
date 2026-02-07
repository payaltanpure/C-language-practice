#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no:");
    scanf("%d", &no);
    if((no%3==0) && (no%5==0)) //15
    {
        printf("%d is divisible by 3 and 5", no);
    }
    else if(no%5==0)  //20
    {
        printf("%d is divisible by 5 only", no);
    }
    else if(no%3==0) // 12, 9
    {
        printf("%d is divisible by 3 only", no);
    }
     else if((no%3!=0) && (no%5!=0)) // 11
    {
        printf("%d is not divisible by 3 and 5 also", no);
    }
    return 0;

}