#include <stdio.h>
int main()
{
    int no;
    printf("Enter the no:");
    scanf("%d", &no);
    if((no%3==0) && (no%5==0))
    {
        printf("%d is divisible by 3 and 5", no);
    }
    return 0;

}