// when the sum of factorial of  all individual no is equal to the original no then that no is strong no. eg. 145 
// eg. num= 145 factorial of individual no that is 1, 4, 5     ,factorial of 1 = 1, 4 = 24, 5= 120 so sum of 1+24+120 is equal to original no = 145 then it is called strong no

 #include <stdio.h>
 int main()
 {
    int num = 145, rem, sum=0, temp=num;
    
    while (num>0)
    {
        //extract, select last digit first
        rem= num%10;
        //factorial logic
        int fact=1;
        for ( int i=1; i<=rem; i++)
        {
            fact*=i;
        }
        sum+=fact;
        //update, select second last digit , go to step 1 again to extract value
        num/=10;
        
    }
    if (temp==sum)
        {
            printf("\nstrong no");
        }
        else {
            printf("\nnot strong no");
        }
    
    return 0;
 }