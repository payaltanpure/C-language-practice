#include <stdio.h>
int main()
{

    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if ((ch=='A') || (ch=='E') || (ch=='I')|| (ch=='O') || (ch=='U'))
    {
        printf("The %c is  capital vowel.", ch);
    }
    else if ((ch=='a') || (ch=='e') || (ch=='i')|| (ch=='o') || (ch=='u'))
    {
      printf("The %c is  small vowel.", ch);
    }
    else
    {
        printf("The %c is  not vowel.", ch);
    }
    return 0;
}