#include <stdio.h>
int main()
{
    
    int i =65;
    do 
    {
        if (i%2==1)
        {
            printf("\nThe %d is ascii value is %c", i, i);
        }
        i++;
    }
    while(i<=90);
    return 0;
}