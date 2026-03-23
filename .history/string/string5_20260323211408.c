#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare using ASCII values
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            printf("\nGreater string is: %s", str1);
            return 0;
        }
        else if (str1[i] < str2[i])
        {
            printf("\nGreater string is: %s", str2);
            return 0;
        }
        i++;
    }

    // If all characters same till one string ends
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        printf("\nBoth strings are equal");
    }
    else if (str1[i] == '\0')
    {
        printf("\nGreater string is: %s", str2);
    }
    else
    {
        printf("\nGreater string is: %s", str1);
    }

    return 0;
}