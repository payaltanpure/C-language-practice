#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find length of str1
    for(i = 0; str1[i] != '\0'; i++);

    // Append str2 to str1
    for(j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';  // end string

    printf("\nConcatenated string: %s", str1);

    return 0;
}