#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter starting value:");
    scanf("\n%d", &start);
    printf("Enter ending value:");
    scanf("\n%d", &end);

    
   for ( int i=start; i<=end; i++)
   {
     if(i%2==0)
     {
       printf("\n%d", i);
     }
     
   }
    return 0;
}