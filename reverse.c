# include <stdio.h>
int main()
{
    int num=789, rev=0, rem ;
    while (num>0)
    {
        //extract
        rem= num%10; // get last digit
        rev= (rev*10) + rem;
        //update
        num = num/10; // num is updated  and made 2digit as operation on last digit is done and we dont want it to select second last digit and line 1 will execuute again to do it
    }
 
    return 0;
} 