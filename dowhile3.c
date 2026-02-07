#include <stdio.h>
int main()
{

    int p, i;
    int sum=0;
    printf("\nEnter two nos to from where we want to add nos and till which no:");
    scanf("%d %d", &i, &p);
    do 
    {
        sum = sum +i;
        i++;
    }
    while (i<=p);

    printf("\n The sum is: %d", sum);



    return 0;
}