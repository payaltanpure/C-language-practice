#include <stdio.h>
int main()
{
    char ch='Z';
    
    do 
    {
        printf("\n%c", ch);
        ch--;
    }
    while (ch >='A' );
    return 0;
}