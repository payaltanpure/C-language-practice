#include <stdio.h>

int main()
{
    char string[10];
    int vowelcnt=0, constcnt=0;
    printf("Enter the string: ");
    scanf("%s", &string);  
    for(int i=0;string[i]='\0';i++)
    {
       if(string[i]=='a','e','i','o','u')
       {
         vowelcnt++;
       }
       else{
        constcnt++;
       }
    }
    printf("\nVowel count is:")


    return 0;
}