#include <stdio.h>
// ASCII values:
// 'a' - 'z' → 97 to 122
// 'A' - 'Z' → 65 to 90

// 👉 Difference = 32
int main()
{
    char str[50];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Convert to UPPERCASE
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("\nUppercase string: %s", str);

    // Convert to lowercase
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\nLowercase string: %s", str);

    return 0;
}