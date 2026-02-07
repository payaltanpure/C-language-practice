/*#include <stdio.h>
int main()
{
    
    int i =65;
    do 
    {
        if (i%2==0)
        {
            printf("\nThe %d is ascii value is %c", i, i);
        }
        i++;
    }
    while(i<=90);
    return 0;
}*/
#include <stdio.h>
int main()
{
    
    int ch = 'A';
    do 
    {
        if (ch%2==0)
        {
            
            printf("\nThe %d is ascii value of %c", ch, ch);
        }
        ch++;
    }
    while(ch<=90);
    return 0;
}
