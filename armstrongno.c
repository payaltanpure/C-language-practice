// no is called armstrong no when the sum of individual num's cube is equal to original no then that no is called armstrong no
//eg. num =153 , cube of individual nos 1 , 5 and 3, cube of 1= 1, 5 = 125, 3= 27 so sum of 1+27+125 is 153 so 153 is called armstrong no
#include <stdio.h>
int main()
{
    int num=153, rem, sum=0, temp=num;
    while(num>0)
    {
        //extract
        rem = num%10;
        sum += (rem*rem*rem);
        //update
        num/=10;
    }
    if (temp==sum)
    {
        printf(" 153 is armstrong no");
    }
    else{
        printf(" 153 is not armstrong no");
    }
    return 0;
}
//prime no , happy no, leap year, neon no , duck no , buz no 