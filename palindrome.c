# include <stdio.h>
int main()
{
    int num=121, rev=0, rem , temp= num;
    while (num>0)
    {
        //extract
        rem= num%10;
        rev= (rev*10) + rem;
        //update
        num = num/10;
    }
    if (temp == rev)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}