#include <stdio.h>

int main()
{
    char string[10];
    char string2[10];
    int i, l = 0, j = 0, flag = 1;

    printf("Enter the string: ");
    scanf("%s", string);   // ✅ removed &

    // Find length
    for(i = 0; string[i] != '\0'; i++)
    {
        l++;
    }
    printf("\nLength of string is: %d", l);

    // Reverse (method 1 - direct print)
    printf("\nReverse string: ");
    for(i = l - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    // Reverse (method 2 - store in string2)
    printf("\nReverse string second method: ");
    j = 0;   // ✅ reset j
    for(i = l - 1; i >= 0; i--)
    {
        string2[j] = string[i];
        printf("%c", string2[j]);
        j++;   // ✅ increment j
    }
    string2[j] = '\0';   // ✅ null terminate

    // Palindrome check using reversed string
    printf("\nPalindrome or not: ");
    flag = 1;   // ✅ reset flag
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] != string2[i])
        {
            flag = 0;
            break;   // ✅ stop early
        }
    }

    if(flag == 1)
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not Palindrome");
    }

    // Palindrome without using reverse
    printf("\nPalindrome or not (without reverse): ");
    j = l - 1;
    flag = 1;

    for(i = 0; i < j; i++, j--)
    {
        if(string[i] != string[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not Palindrome");
    }

    return 0;
}