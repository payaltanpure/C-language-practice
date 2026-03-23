#include <stdio.h>

int main()
{
    char string[10];
    int vowelcnt = 0, constcnt = 0;

    printf("Enter the string: ");
    scanf("%s", &string);   

    for(int i = 0; string[i] != '\0'; i++)   // ✅ fixed
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' ||
           string[i]=='o' || string[i]=='u' ||
           string[i]=='A' || string[i]=='E' || string[i]=='I' ||
           string[i]=='O' || string[i]=='U')
        {
            vowelcnt++;
        }
        else
        {
            constcnt++;
        }
    }

    printf("\nVowel count is: %d", vowelcnt);
    printf("\nConsonant count is: %d", constcnt);

    return 0;
}