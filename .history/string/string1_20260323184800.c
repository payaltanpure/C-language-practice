#include <stdio.h>
int main()
{
    char string[10];
    char string2
    int i, l=0,j=0;
    printf("enter the string:");
    scanf("%s", &string);
    for(i=0;string[i]!='\0';i++)
    {
       l++;
    }
    printf("\nLength of string is:%d",l);


    printf("\nReverse string:");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }

    printf("\nReverse string second method:");
    for(i=l-1;i>=0;i--)
    {
        printf("%c",string[i]);
    }
}