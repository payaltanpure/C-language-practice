//no is called perfect no when , sum of nos which are used to divide the no perfectly (divisor) but divisor should be less than oroginal no mod of it will come 0 , that sum and original no is equal then that no is called perfect.
//eg : no =6 , nos: 1,2 , 3 are the nos which perfectly divide the 6 , so 1+2+ 3 is 6 so no ==sum so , 6 is perfect no
#include <stdio.h>
int main()
{

    int num, sum =0, i;
    printf("\n Enter the value:");
    scanf("%d", &num);
    for (i=1; i<num; i++) // goes till less than num from 1 to find perfect divisor 
    {
        if (num%i ==0) //checks the remainder is equal to zero or not , if zero means perfect divisor so , add them all 
        {
            sum+=i;
        }
    }
    if (num == sum) //check sum and num if equal then perfect no 
    {
        printf ("\n %d is perfect no", num);
    }
    else{
        printf ("\n  %d is not perfect no", num);
    }
    return 0;
}