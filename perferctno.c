//no is called perfect no when , sum of nos which are divisble by 

#include <stdio.h>
int main()
{
    int num=6, sum =0, i;
    for (i=1; i<num; i++)
    {
        if (num%i ==0)
        {
            sum+=i;
        }
    }
    if (num == sum)
    {
        printf ("\n 6 is perfect no");
    }
    else{
        printf ("\n 6 is not perfect no");
    }
    return 0;
}