#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);
    printf("Ascii value for %c is : %d  ", ch,ch);
    if ((ch>=65) && (ch<=90))
    {
        printf("\n%c is capital character", ch);
    }
    else if ((ch>=97) && (ch<=122))
    {
        printf("\n%c is small character", ch);
    }
    else if ((ch>=48) && (ch<=57))
    {
        printf("\n%c is number", ch);
    }
    else
    {
        printf("\nIt is other character");
    }
      


    return 0;

}